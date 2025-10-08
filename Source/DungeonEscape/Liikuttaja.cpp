// Fill out your copyright notice in the Description page of Project Settings.


#include "Liikuttaja.h"

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

	float Floattini = 10.0f;
	float* FloatPointteri = &Floattini;

	float Tulos = *FloatPointteri + 6.0f; 
	UE_LOG(LogTemp, Display, TEXT("Tulos on %f"), Tulos);

	*FloatPointteri = 30.0f;
	UE_LOG(LogTemp, Display, TEXT("MyFloat: %f"), Floattini);
	UE_LOG(LogTemp, Display, TEXT("FloatPointterini: %f"), *FloatPointteri);

	UE_LOG(LogTemp, Display, TEXT("FloatPointterini: %p"), FloatPointteri);
	UE_LOG(LogTemp, Display, TEXT("MyFloat: %p"), &Floattini);



	FVector Vektorini = FVector(1.0f, 1.0f, 1.0f);


	FVector* VektoriPointteri = &Vektorini;


	(*VektoriPointteri).X = 2.0f;
	VektoriPointteri->Y = 3.0f;
	VektoriPointteri->Z = 4.0f;

	FString VektoriStringi = Vektorini.ToCompactString();
	UE_LOG(LogTemp, Display, TEXT("Vektorini: %s"), *VektoriStringi);



}



// Called every frame
void ULiikuttaja::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	
}

