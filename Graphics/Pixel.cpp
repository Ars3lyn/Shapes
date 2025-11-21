#include "Pixel.h"
#include "Console.h"
#include "Shape.h"

void Pixel::Draw()
{
	Console::SetBackgroundColor(Color); //old version
	//Console::SetBackgroundColor(rand() % 256, rand() % 256, rand() % 256); new version
	Console::SetCursorPosition(Location._x, Location._y);
	Console::Write(" ");
	Console::Reset();
}

