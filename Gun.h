#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"


#include "Gun.generated.h"

UCLASS()
class SHOOTERPROJECT_API AGun : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AGun();
	void PullTrigger();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
		USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
		USkeletalMeshComponent* Mesh;
	UPROPERTY(EditDefaultsOnly)
		UParticleSystem* MuzzleFlash;
	UPROPERTY(EditAnywhere)
		float MaxRange = 1000;
	UPROPERTY(EditAnywhere)
		UParticleSystem* ImpactEffect;
	UPROPERTY(EditAnywhere)
		float Damage = 10;
	bool GunTrace(FHitResult& Hit, FVector& ShotDirection);
	UPROPERTY(EditAnywhere)
		USoundBase* MuzzleSound;
	UPROPERTY(EditAnywhere)
		USoundBase* ImpactSound;


	AController* GetOwnerController() const;
};



