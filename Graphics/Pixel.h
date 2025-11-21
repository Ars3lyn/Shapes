#pragma once
#include <Point2D.h>
#include <Console.h>
class Pixel
{
private:
	//member fields
	Point2D Location;
	ConsoleColor Color;


public:
	//overloaded constructors -> sets member's fields
	Pixel(Point2D Position, ConsoleColor newColor) : Location(Position), Color(newColor)
	{ }
	void Draw();
};

