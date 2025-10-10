// Fill out your copyright notice in the Description page of Project Settings.


#include "Liikuttaja.h"

#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
ULiikuttaja::ULiikuttaja()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULiikuttaja::BeginPlay()
{
	Super::BeginPlay();

	AloitusPaikka = GetOwner()->GetActorLocation();

	KohdePaikka = AloitusPaikka + LiikeOFfsetti;




}



// Called every frame
void ULiikuttaja::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	if (Liikkua)
	{
		KohdePaikka = AloitusPaikka + LiikeOFfsetti;

	}

	else
	{
		KohdePaikka = AloitusPaikka;

	}



	FVector NykyinenPaikka = GetOwner()->GetActorLocation();

	KohdeSaavutettu = NykyinenPaikka.Equals(KohdePaikka);

	if(!KohdeSaavutettu)
	{

		float Nopeus = LiikeOFfsetti.Length() / LiikeAika;

		FVector UusiPaikka = FMath::VInterpConstantTo(NykyinenPaikka, KohdePaikka, DeltaTime, Nopeus);


		GetOwner()->SetActorLocation(UusiPaikka);



	}

	





}

