#include <iostream>
#include <string>

#include"Engine.h"
#include"Player.h"
#include"Wall.h"

using namespace std;

string Map[10] =
{
	"**********",
	"*P       *",
	"*        *",
	"*        *",
	"*        *",
	"*        *",
	"*        *",
	"*        *",
	"*        *",
	"**********",
};

int main()
{
	UEngine* MyEngine = new UEngine();

	//AActor* MyActor = new AActor();
	//MyActor->X = 1;
	//MyActor->Y=1;
	//MyActor->Shape = 'p';
	//MyEngine->SpawnActor(MyActor);

	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < Map[Y].length(); ++X)
		{
			if (Map[Y][X] == 'P')
			{
				MyEngine->SpawnActor(new APlayer(X, Y));
			}
			else if (Map[Y][X] == '*')
			{
				MyEngine->SpawnActor(new AWall(X, Y));
			}
		}
	}

	//MyEngine->SpawnActor(new AWall(0, 0)); // 위에 string Map[10]을 어렵지만 쉽게 만든게 이거
	//MyEngine->SpawnActor(new AWall(0, 1));
	//MyEngine->SpawnActor(new AWall(0, 2));
	//MyEngine->SpawnActor(new AWall(0, 3));
	//MyEngine->SpawnActor(new AWall(0, 4));
	//MyEngine->SpawnActor(new AWall(0, 5));
	//MyEngine->SpawnActor(new AWall(0, 6));
	//MyEngine->SpawnActor(new AWall(0, 7));
	//MyEngine->SpawnActor(new AWall(0, 8));
	//MyEngine->SpawnActor(new AWall(0, 9));
	//MyEngine->SpawnActor(new AWall(9, 1));
	//MyEngine->SpawnActor(new AWall(9, 2));
	//MyEngine->SpawnActor(new AWall(9, 3));
	//MyEngine->SpawnActor(new AWall(9, 4));
	//MyEngine->SpawnActor(new AWall(9, 5));
	//MyEngine->SpawnActor(new AWall(9, 6));
	//MyEngine->SpawnActor(new AWall(9, 7));
	//MyEngine->SpawnActor(new AWall(9, 8));
	//MyEngine->SpawnActor(new AWall(9, 9));
	//MyEngine->SpawnActor(new AWall(1, 9));
	//MyEngine->SpawnActor(new AWall(1, 9));
	//MyEngine->SpawnActor(new AWall(1, 9));
	//MyEngine->SpawnActor(new AWall(2, 9));
	//MyEngine->SpawnActor(new AWall(3, 9));
	//MyEngine->SpawnActor(new AWall(4, 9));
	//MyEngine->SpawnActor(new AWall(5, 9));
	//MyEngine->SpawnActor(new AWall(6, 9));
	//MyEngine->SpawnActor(new AWall(7, 9));
	//MyEngine->SpawnActor(new AWall(8, 9));






	MyEngine->Run();

	delete MyEngine;


	return 0;
}