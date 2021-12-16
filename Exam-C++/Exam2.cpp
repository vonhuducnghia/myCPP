#include <iostream>
#include <math.h>
using namespace std;

class TwoDShape
{
    public:
    double getPerimeter();
}

class Circles : public TwoDShape
{
    public:
    double findShapeperimeter(double cord[][2], int n)
    {
   
        double perimeter = 0.0;
        int j = n - 1;
        for (int i = 0; i < n; i++) {
        perimeter += sqrt((cord[j][0] - cord[i][0]) * (cord[j][0] - cord[i][0]) + (cord[j][1] - cord[i][1]) * (cord[j][1] - cord[i][1]));
        j = i;
    }
    return perimeter;
}
};

class Rectangles : public TwoDShape
{
    private:
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double length, width;
    public:
    double findlength, findwidth;
    length = square(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    width = square(pow(x3 - x2, 2) + pow(y3 - y2, 2));
};

class Squares : public TwoDShape
{
    private:
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double side;
    public:
    side = square(pow(x2 - x1, 2) + pow(y2 - y1, 2));
};

class Triangles : public TwoDShape
{
    private:
    double x1, y1, x2, y2, x3, y3;
    double side1, side2, side3;
    public:
    side1 = square(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    side2 = square(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    side3 = square(pow(x1 - x3, 2) + pow(y1 - y3, 2));
};

double Circles::Circle()
{
    return (2 * radius * 3.1415926535);
}

double Rectangles::Rectangle()
{
    return ((length + width) * 2.0);
}

double Squares::Square()
{
    return (side * 4.0);
}

double Triangles::Triangle()
{
    return (side1 + side2 + side3);
}
