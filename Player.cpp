#include "Player.h"

APlayer::APlayer()
{
	//X = 0;
	//Y = 0;
	//Shape = ' ';
	AActor::AActor();
}

APlayer::APlayer(int NewX, int NewY, char NewShape)
{
	AActor::AActor(NewX, NewY, NewShape);
	X = NewX;
	Y = NewY;
	Shape = NewShape;
}

APlayer::~APlayer()
{
}
