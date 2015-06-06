// Fill out your copyright notice in the Description page of Project Settings.

#include "Sciges_BeyondofTime.h"
#include "BlueP.h"


// Sets default values
ABlueP::ABlueP()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABlueP::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABlueP::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
	UE_LOG(LogTemp, Warning, TEXT("pull %d"), a);
	a++;
}

