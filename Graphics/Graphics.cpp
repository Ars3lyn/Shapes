#include <iostream>
#include "Console.h"
#include "Input.h"
#include <algorithm>
#include <memory>
#include "Tester.h"
#include "Point2D.h"
#include "pixel.h"
#include "Line.h"
#include "triangle.h"
#include "Rectangle.h"
#include "Circle.h"
#include "ShapeFactory.h"


int main()
{
	Tester graphicsTest;
	srand((unsigned int)time(NULL)); //seed the random # generator

	Console::ResizeWindow(150, 30);

	int menuSelection = 0;
	std::vector<std::string> menuOptions{ "1. Draw Pixel", "2. Draw Line", "3. Draw Triangle", "4. Draw Rectangle", "5. Draw Circle", "6. Draw Random Shapes", "7. Exit" };

	do
	{
		Console::Clear();
		menuSelection = Input::GetMenuSelection(menuOptions);
		Console::Clear();
		int Y = Console::GetWindowHeight();
		int X = Console::GetWindowWidth();

		//----------------------------------------------------------------
		//                                                              //
		//    Call your methods in the appropriate case statement       //
		//                                                              //
		switch (menuSelection)
		{
		case 1:
		{
			int rng_Color = rand() % 7 + 1;
			ConsoleColor rng = ConsoleColor(rng_Color);
			Point2D pt(rand() % X, rand() % Y);
			Pixel a_Pixel(pt, rng);
			a_Pixel.Draw();
			break;
		}
		case 2:
		{
			int rng_Color = rand() % 7 + 1;
			ConsoleColor rng = ConsoleColor(rng_Color);
			Point2D Point1(rand() % X, rand() % Y);
			Point2D Point2(rand() % X, rand() % Y);
			Line A_Line(Point1, Point2, rng);
			A_Line.Draw();
			break;
		}
		case 3:
		{
			int rng_Color = rand() % 7 + 1;
			ConsoleColor rng = ConsoleColor(rng_Color);
			Point2D point1(rand() % X, rand() % Y);
			Point2D point2(rand() % X, rand() % Y);
			Point2D point3(rand() % X, rand() % Y);
			Triangle tri(point1, point2, point3, rng);
			tri.Draw();
			break;
		}
		case 4:
		{
			int rng_Color = rand() % 7 + 1;
			ConsoleColor rng = ConsoleColor(rng_Color);
			Point2D point1(rand() % X, rand() % Y);
			int height = (rand() % Y);
			int width = (rand() % X);
			Rectangle rect(height, width, point1, rng);
			rect.Draw();
			break;
		}
		case 5:
		{
			int rng_Color = rand() % 7 + 1;
			ConsoleColor rng = ConsoleColor(rng_Color);
			Point2D point1(rand() % (X - 5), rand() % (Y - 5));
			int spacingY = Console::GetWindowHeight() - point1._y;
			int spacingX = Console::GetWindowWidth() - point1._x;
			int radius = 0;
			int smCheck = 100;
			std::vector<int> choice = { spacingX, spacingY, point1._x, point1._y };
			for (int i : choice)
			{
				if (i < smCheck)
				{
					smCheck = i;
				}
			}
			radius = rand() % smCheck + 1;
			Circle cir(radius, point1, rng);
			cir.Draw();
			break;
		}
		case 6:
		{
			std::vector<std::unique_ptr<Shape>> shapes;
			shapes.push_back(ShapeFactory::RandomLine());
			shapes.push_back(ShapeFactory::RandomSquare());
			shapes.push_back(ShapeFactory::RandomTraingle());
			shapes.push_back(ShapeFactory::RandomCircle());
			for (int i = 0; i < 100; i++)
			{
				int r = (rand() % 4 + 1);
				 shapes[r];
			}
			break;
		}
		default:
			break;
		}

		Input::PressEnter("",true);

	} while (menuSelection != menuOptions.size());
}