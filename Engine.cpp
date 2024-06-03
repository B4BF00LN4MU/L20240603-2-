#include "Engine.h"
#include <conio.h> //_getch() ������ ���� STL
#include "Actor.h"

UEngine::UEngine()
{
	IsRunning = true;
}

UEngine::~UEngine()
{
}

void UEngine::SpawnActor(AActor* NewActor)
{
	Actors.push_back(NewActor);
}

void UEngine::Run()
{
	while (IsRunning)
	{
		Input();
		Tick();
		Render();
	}
}

void UEngine::Input()
{
	_getch();
}

void UEngine::Tick()
{
	for (auto Actor : Actors )
	{
		Actor->Tick();
	}
}

int UEngine::Render()
{
	for (auto Actor : Actors)
	{
		Actor->Render();
	}
}
