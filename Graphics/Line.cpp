#include "Line.h"
#include "Shape.h"

void Line::PlotLine(int X1, int Y1, int X2, int Y2)
{
    int dx = abs(X2 - X1);
    int sx = X1 < X2 ? 1 : -1;
    int dy = -abs(Y2 - Y1);
    int sy = Y1 < Y2 ? 1 : -1;
    int error = dx + dy;
    while (true)
    {
        Plot(X1, Y1);
        {
            if (X1 == X2 && Y1 == Y2)
            {
                break;
            }
            int e2 = 2 * error;
            if (e2 >= dy)
            {
                if (X1 == X2)
                {
                    break;
                }
                error = error + dy;
                X1 = X1 + sx;
            }
            if (e2 <= dx)
            {
                if (Y1 == Y2)
                {
                    break;
                }
                error = error + dx;
                Y1 = Y1 + sy;
            }
        }
    }
}

void Line::Draw()
{
    Console::SetBackgroundColor(GetColor());
    PlotLine(Shape::location()._x, Shape::location()._y, Location2._x, Location2._y);
    Console::Reset();
}
