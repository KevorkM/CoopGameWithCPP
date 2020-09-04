// Fill out your copyright notice in the Description page of Project Settings.


#include "SGameState.h"
#include "Net/UnrealNetwork.h"

void ASGameState::OnRep_WaveState(EWaveState oldState)
{
	WaveStateChanged(WaveState, oldState);

}

void ASGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty> & OutLifetimeProps)const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASGameState, WaveState);
}

void ASGameState::SetWaveState(EWaveState NewState)
{
	EWaveState OldState = WaveState;

	WaveState= NewState;
	//call on server
	OnRep_WaveState(OldState);

}