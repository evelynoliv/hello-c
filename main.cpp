#include <iostream>
using namespace std;
bool gameOver;
const int width = 20;
const int height = 20;
int x,y frootX, frootY, score;
enum eDirection { STOP =0, LEFTM RIGHT, UP, DOWN};
eDirection dir



void Setup()
{
gameOver = false;
dir = STOP;
x = width / 2;
y = height / 2;
frootX = rand() % width;
froortY = rand() % height;
}

void Draw ()
{
	
	


}

void Input()
{


}

void Logic ()
{


}

int main()
{
	Setup();
	while (!gameOver)
	{
		Draw();
		Input();
		Logic();
		//Sleep(10)
		}

return 0;

}