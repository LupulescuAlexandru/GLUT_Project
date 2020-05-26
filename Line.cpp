#include "Line.h"
#include "EngineGlut.h";
#include "Point.h"

// Point constructor
Line::Line(Point first, Point second)
{
    SetLine(first, second);
}

// Point member function
void Line::SetLine(Point x_Point, Point y_Point)
{
    first = x_Point;
    second = y_Point;
}

void Line::draw()
{
    EngineGlut e;
    e.drawLine(first.getX(), first.getY(), second.getX(), second.getY());
}