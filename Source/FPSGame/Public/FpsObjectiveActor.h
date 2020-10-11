// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FpsObjectiveActor.generated.h"

class USphereComponent;

UCLASS()
class FPSGAME_API AFpsObjectiveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFpsObjectiveActor();

protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComp;

	UPROPERTY(EditDefaultsOnly, Category = "Components")
	UParticleSystem* PickupFX;

	void PlayEffects();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

};
