#include "Wall.h"

AWall::AWall()
{
	X = 1;
	Y = 1;
	Shape = ' ';
	//AActor::AActor();
}

AWall::AWall(int NewX, int NewY, char NewShape)
{
//	AActor::AActor(NewX, NewY, NewShape);
	X = NewX;
	Y = NewY;
	Shape = NewShape;
}

AWall::~AWall()
{
}
