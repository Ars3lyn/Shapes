#pragma once
#include "Shape.h"

class Line : public Shape
{
	Point2D Location2;
public:
	Line(Point2D first, Point2D second, ConsoleColor newColor) : Shape(first, newColor), Location2(second){ }
	void PlotLine(int X1, int Y1, int X2, int Y2 );
	void Draw() override;
	void Point(Point2D point2) const { point2 = Location2; }
	Point2D location2() const { return Location2; }

};
