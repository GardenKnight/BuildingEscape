// Copyright David Hinkle, Angelica Visione 2018

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "OpenDoor.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BUILDINGESCAPE_API UOpenDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UOpenDoor();

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private: // for code privacy, other methods can't just set in
	UPROPERTY(VisibleAnywhere) // macro before compile
	float OpenPositionZ = -332.0f;

	UPROPERTY(EditAnywhere) // macro before compile
	ATriggerVolume* PressurePlate;
};
