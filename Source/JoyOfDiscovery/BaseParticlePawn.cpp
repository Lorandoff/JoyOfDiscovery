// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseParticlePawn.h"

// Sets default values
ABaseParticlePawn::ABaseParticlePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseParticlePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseParticlePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseParticlePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

