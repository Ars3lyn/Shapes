#pragma once
#include "Shape.h"
class Circle : public Shape
{
private:
	int Radius;

public:
	Circle(int radius, Point2D centerPoint, ConsoleColor color) : Shape(centerPoint, color), Radius(radius){}
	void GetCircle(int radius) { Radius = radius; }
	int SetCircle() const { return Radius; }
	void DrawCirclePoints(int xc, int yc, int x, int y);
	void DrawCircle(int xc, int yc, int r);
	void Draw() override;
};

