#include "Triangle.h"
#include <vector>

void Triangle::Draw()
{
	for (int i = 0 ; i < _line.size(); i++)
	{
		_line[i].Draw();
	}
	Console::Reset();
}

