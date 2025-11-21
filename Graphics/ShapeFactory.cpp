#include "ShapeFactory.h"

Point2D ShapeFactory::RandomPoint()
{

	return Point2D();
}

ConsoleColor ShapeFactory::RandomColor()
{
	return ConsoleColor();
}

std::unique_ptr<Line> ShapeFactory::RandomLine()
{
	Line rngLine(RandomPoint(), RandomPoint(), RandomColor());
	return std::make_unique<Line>(rngLine);
}

std::unique_ptr<Triangle> ShapeFactory::RandomTraingle()
{
	Triangle rngTriangle(RandomPoint(), RandomPoint(), RandomPoint(), RandomColor());
	return std::make_unique<Triangle>(rngTriangle);
}

std::unique_ptr<Rectangle> ShapeFactory::RandomSquare()
{
	Rectangle rngRectangle(RandomPoint()._x, RandomPoint()._y, RandomPoint(), RandomColor());
	return std::make_unique<Rectangle>(rngRectangle);
}

std::unique_ptr<Circle> ShapeFactory::RandomCircle()
{
	int radius = (rand());
	Circle rngCircle(radius, RandomPoint(), RandomColor());
	return std::make_unique<Circle>(rngCircle);
}
