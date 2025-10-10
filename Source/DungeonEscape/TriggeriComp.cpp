// Fill out your copyright notice in the Description page of Project Settings.


#include "TriggeriComp.h"

UTriggeriComp::UTriggeriComp()
{

	PrimaryComponentTick.bCanEverTick = true;


	


}

void UTriggeriComp::BeginPlay()
{

	Super::BeginPlay();




}

void UTriggeriComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}
