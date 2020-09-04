// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SGameMode.generated.h"

enum class EWaveState : uint8;

//Killed Actor, killer actor, 
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnActorKilled, AActor*, VictimActor, AActor*, KillerActor, AController*, KillerController);

UCLASS()
class COOPGAMEPROTOTYPE_API ASGameMode : public AGameModeBase
{
	GENERATED_BODY()
	

public:

	ASGameMode();

protected:

	//spawn a single bot
	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void SpawnNewBot();

	//start the next wave
	void StartWave();

	//end the current wave
	void EndWave();

	// Set the timer for the next wave
	void PrepareForNextWave();

	void SpawnBotTimerElapsed();

	void CheckWaveState();

	void CheckAnyPlayerAlive();

	void GameOver();

	void SetWaveState(EWaveState NewState);

protected:

	FTimerHandle TimerHandle_BotSpawmer;

	FTimerHandle TimerHandle_NextWaveStart;
	
	UPROPERTY(EditDefaultsOnly, Category = "GameMode")
	float TimeBetweenWaves;

	//Bots to spawn in the current wave
	int32 NrOfBotsToSpawn;

	int32 WaveCount;

public:
	virtual void StartPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	UPROPERTY(BlueprintAssignable, Category ="GameMode")
	FOnActorKilled OnActorKilled;
};
