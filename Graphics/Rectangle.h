#pragma once
#include "Shape.h"
#include<vector>
#include"Line.h"
class Rectangle : public Shape
{
private:
	int Height;
	int Width;
	std::vector<Line> square;
public:
	Rectangle(int height, int width, Point2D startPt, ConsoleColor color) : Shape(startPt, color), Height(height), Width(width)
	{
		Point2D topRight(startPt._x + width, startPt._y);
		Point2D bottomRight(startPt._x + width, startPt._y + height);
		Point2D bottomLeft(startPt._x, startPt._y + height);
		Line a(startPt, topRight, GetColor());
		Line b(topRight, bottomRight, GetColor());
		Line c(bottomRight, bottomLeft, GetColor());
		Line d(bottomLeft, startPt, GetColor());
		square.push_back(a);
		square.push_back(b);
		square.push_back(c);
		square.push_back(d);
	}
	void SetHeight(int height){ Height = height ; };
	int GetHeight() const { return Height; };
	void SetWidth(int width) { Width = width; };
	int GetWidth() const { return Width; };
	void Draw() override;
};

