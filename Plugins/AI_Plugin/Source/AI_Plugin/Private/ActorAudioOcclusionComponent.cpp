// Fill out your copyright notice in the Description page of Project Settings.
#include "AI_PluginPrivatePCH.h"
#include "AI_Plugin.h"
#include "ActorAudioOcclusionComponent.h"


// Sets default values for this component's properties
UActorAudioOcclusionComponent::UActorAudioOcclusionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UActorAudioOcclusionComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UActorAudioOcclusionComponent::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

