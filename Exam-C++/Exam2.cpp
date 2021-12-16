#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class TwoDShape
{
    public:
    void print();
};

class Circles : public TwoDShape
{
    public:
    double perimeter;
    double radius, x, y;
    double findShapeperimeter();
};

double Circles::findShapeperimeter()
{
    double perimeter = 0.0;
    perimeter = radius * 2 * 3.141;
}
void Circles::print()
{
    cout << "Perimeter: " << perimeter << endl;
}

int main()
{
    Circles c1;
    c1.radius = 5;
    c1.print();
}

/*class Rectangles : public TwoDShape
{
    private:
};

class Squares : public TwoDShape
{
    private:
};

class Triangles : public TwoDShape
{
    private:
};*/