#pragma once
#include "Point2D.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Console.h"
#include <vector>
class ShapeFactory
{
public:
	static Point2D RandomPoint();
	static ConsoleColor RandomColor();
	static std::unique_ptr<Line> RandomLine();
	static std::unique_ptr<Triangle> RandomTraingle();
	static std::unique_ptr<Rectangle> RandomSquare();
	static std::unique_ptr<Circle> RandomCircle();
};

