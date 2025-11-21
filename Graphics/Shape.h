#pragma once
#include <Point2D.h>
#include <Console.h>
class Shape
{
private:
	Point2D Location;
	ConsoleColor Color;


public:
	Shape(Point2D Position, ConsoleColor newColor) : Location(Position), Color(newColor)
	{}
	virtual void Draw() = 0;
	void Plot(int X, int Y);
	void Point(Point2D point) const { point = Location; }
	Point2D location() const { return Location; }
	ConsoleColor GetColor() const { return Color; }
};

