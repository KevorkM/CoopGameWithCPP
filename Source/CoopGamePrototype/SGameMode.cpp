// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameMode.h"
#include "SHealthComponent.h"
#include <SGameState.h>
#include <SPlayerState.h>
#include "TimerManager.h"



ASGameMode::ASGameMode() {
	TimeBetweenWaves = 2.0f;

	GameStateClass = ASGameState::StaticClass();
	//PlayerStateClass = ASPlayerState::StaticClass();

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 1.f;
}

void ASGameMode::StartWave()
{
	WaveCount++;

	NrOfBotsToSpawn = 2 * WaveCount;

	GetWorldTimerManager().SetTimer(TimerHandle_BotSpawmer, this, &ASGameMode::SpawnBotTimerElapsed, 1.f, true, 0.f);

	SetWaveState(EWaveState::WaveInProgress);
}

void ASGameMode::EndWave()
{
	GetWorldTimerManager().ClearTimer(TimerHandle_BotSpawmer);

	PrepareForNextWave();

	SetWaveState(EWaveState::WaitingToComplete);
}

void ASGameMode::PrepareForNextWave()
{
	GetWorldTimerManager().SetTimer(TimerHandle_NextWaveStart, this, &ASGameMode::StartWave,TimeBetweenWaves,false);

	SetWaveState(EWaveState::WaitingToStart);
}


void ASGameMode::SpawnBotTimerElapsed()
{
	SpawnNewBot();

	NrOfBotsToSpawn--;

	if (NrOfBotsToSpawn <= 0) {
		EndWave();
	}
}

void ASGameMode::CheckWaveState()
{
	bool bIsPreparingForWave = GetWorldTimerManager().IsTimerActive(TimerHandle_NextWaveStart);

	if (NrOfBotsToSpawn >0 || bIsPreparingForWave) {
		return;
	}
	bool bIsAnyBotAlive = false;

	for (FConstPawnIterator It = GetWorld()->GetPawnIterator(); It; ++It) {

		APawn* TestPawn = It->Get();

		if (TestPawn == nullptr || TestPawn->IsPlayerControlled() ) {
			continue;
		}
		USHealthComponent* HealthComp = Cast<USHealthComponent>( TestPawn->GetComponentByClass(USHealthComponent::StaticClass()));
		if (HealthComp && HealthComp->GetHealth()) {
			bIsAnyBotAlive = true;
			break;
		}
	}
	if (!bIsAnyBotAlive) {
		SetWaveState(EWaveState::WaveComplete);
		PrepareForNextWave();
	}
}

void ASGameMode::CheckAnyPlayerAlive()
{
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It) {
		APlayerController*PC = It->Get();
		if (PC && PC->GetPawn()) {
			APawn*MyPawn = PC->GetPawn();
			USHealthComponent*HealthComp = Cast<USHealthComponent>(MyPawn->GetComponentByClass(USHealthComponent::StaticClass()));
			if (ensure(HealthComp) && HealthComp->GetHealth() > 0.f) {
				
				//A player is still alive
				return;
			}
		}
	}
	// No player alive
	GameOver();
}

void ASGameMode::GameOver()
{
	EndWave();

	//@TODO: Finish up the match, present GameOver to the player

	UE_LOG(LogTemp, Log, TEXT("Game Over! Player is dead"));

	SetWaveState(EWaveState::GameOver);
}

void ASGameMode::SetWaveState(EWaveState NewState)
{
	ASGameState* GS = GetGameState<ASGameState>();

	if (ensureAlways(GS)) {
		GS->SetWaveState(NewState);
		
	}
}

void ASGameMode::StartPlay()
{
	Super::StartPlay();

	PrepareForNextWave();
}

void ASGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	CheckWaveState();
	CheckAnyPlayerAlive();
}