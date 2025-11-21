#pragma once
#include "Shape.h"
#include "Line.h"
#include <vector>
class Triangle : public Shape
{
private:
	Point2D Location2;
	Point2D Location3;
	std::vector<Line>_line;
public:
	Triangle(Point2D first, Point2D second, Point2D third, ConsoleColor color) : Shape(first, color), Location2(second), Location3(third)
	{
		Line a(location(), second, GetColor());
		Line b(second, third, GetColor());
		Line c(third, location(), GetColor());
		_line.push_back(a);
		_line.push_back(b);
		_line.push_back(c);
	}
	void Point2(Point2D point2) { Location2 = point2; }
	Point2D location2() const { return Location2; }
	void Point3(Point2D point3) {Location3 = point3; }
	Point2D location3() const { return Location3; }
	void Draw() override;
	
	
};

