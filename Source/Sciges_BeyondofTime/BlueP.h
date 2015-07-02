// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "BlueP.generated.h"

UCLASS(Blueprintable)
class SCIGES_BEYONDOFTIME_API ABlueP : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlueP();

	//Variables
	UPROPERTY(EditAnywhere, Category = "Count")
	int32 a;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
