#include <iostream>
#include <fstream>
#include <conio.h> //_getch() 쓸려고 쓰는 STL

#include "Engine.h"
#include "Actor.h"

using namespace std;

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

void UEngine::loadlevel(string MapFilename)
{
	char Map[255];

	ifstream InputFile;

	InputFile.open(MapFilename);

	int X = 0;
	int Y = 0;
	while (InputFile.getline(Map, 80))
	{
		for (int X = 0; X < strlen(Map); ++X)
		{
			if (Map[X] == 'p')
			{
				SpawnActor(new APlayer(X, Y));
			}
			else if (Map[X] == "*")
			{
				SpawnActor(new AWall(X, Y));
			}
		}
		Y++
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
