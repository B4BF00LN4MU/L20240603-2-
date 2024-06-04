#pragma once
#include<iostream>
#include<vector>
#include"Actor.h"

using namespace std;

class AActor;

class UEngine
{
public:
	UEngine();
	virtual ~UEngine();

	void SpawnActor(AActor* NewActor);

	void Run();

	bool IsRunning;
	
	void loadlevel(string MapFilename);

	vector<AActor*> Actors;

protected:
	void Input();
	void Tick();
	int Render();
};

