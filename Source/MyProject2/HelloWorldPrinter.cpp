// Fill out your copyright notice in the Description page of Project Settings.

#include "MyProject2.h"
#include "HelloWorldPrinter.h"

AHelloWorldPrinter::AHelloWorldPrinter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	MyNumber = 12;
}

void AHelloWorldPrinter::BeginPlay(){
	Super::BeginPlay(); // Retain all the base functionality of the original BeginPlay() plus your own - James Alaniz

	if (GEngine){
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Hello World!"));
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::FromInt(MyNumber));
	}

}


