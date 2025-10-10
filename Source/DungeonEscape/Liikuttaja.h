// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Liikuttaja.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUNGEONESCAPE_API ULiikuttaja : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULiikuttaja();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere)
	FVector LiikeOFfsetti;

	UPROPERTY(EditAnywhere)
	float LiikeAika = 4.0f;
	

	UPROPERTY(EditAnywhere)
	bool Liikkua = false;


	UPROPERTY(VisibleAnywhere)
	bool KohdeSaavutettu = false;

	FVector AloitusPaikka;
	FVector KohdePaikka;
};
