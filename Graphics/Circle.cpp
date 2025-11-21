#include "Circle.h"
#include "Shape.h"

void Circle::DrawCirclePoints(int xc, int yc, int x, int y)
{
    Plot(xc + x, yc + y);
    Plot(xc - x, yc + y);
    Plot(xc + x, yc - y);
    Plot(xc - x, yc - y);
    Plot(xc + y, yc + x);
    Plot(xc - y, yc + x);
    Plot(xc + y, yc - x);
    Plot(xc - y, yc - x);
}

void Circle::DrawCircle(int xc, int yc, int radius)
{
    int x = 0;
    int y = radius;
    int diameter = 3 - (2 * radius);
    DrawCirclePoints(xc, yc, x, y);
    while ( y >= x )
    {
        x = x + 1;
        if (diameter > 0)
        { 
            y--;
            diameter = diameter + 4 * (x - y) + 10;
        }
        else
        {
            diameter = diameter + 4 * x + 6;
        }
        DrawCirclePoints(xc, yc, x, y);
        
    }
}

void Circle::Draw()
{
    Console::SetBackgroundColor(GetColor());
    DrawCircle(Shape::location()._x, Shape::location()._y, Radius);
    Console::Reset();
}
