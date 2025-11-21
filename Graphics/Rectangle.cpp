#include "Rectangle.h"

void Rectangle::Draw()
{
	Console::SetBackgroundColor(GetColor());
	for (int i = 0; i < square.size(); i++)
	{
		square[i].Draw();
	}
	Console::Reset();
}
