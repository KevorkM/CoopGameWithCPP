// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SPowerupActor.generated.h"

UCLASS()
class COOPGAMEPROTOTYPE_API ASPowerupActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASPowerupActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Time between powerup ticks
	UPROPERTY(EditDefaultsOnly, Category = "PowerUps")
		float PowerUpInterval;

	//Total times we apply the power up effect
	UPROPERTY(EditDefaultsOnly, Category = "PowerUps")
		int32 TotalNrOfTicks;

	FTimerHandle TimerHandle_PowerupTick;

	//total number of ticks applied
	int32 TicksProcessed;

	UFUNCTION()
	void OnTickPowerup();

public:

	void ActivatePowerUp();

	//this is when the power up gets activated
	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
		void OnActivated();

	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
	void OnPowerupTicked();

	//this is when the timer of the power up runs out and disapears
	UFUNCTION(BlueprintImplementableEvent, Category = "PowerUps")
		void OnExpired();

};

