#include <bits/stdc++.h>

using namespace std;
// base-class
class Quadrilateral
{
protected:
   double S;
   // double width;
   // double height;

public:
   // Quadrilateral(){width = 1; height = 1;} //default constructor

   virtual double area() = 0;
   virtual void set() = 0;
   virtual void print() = 0;
};
// sub-class
class Rectangle : public Quadrilateral
{
private:
   double width;
   double height;

public:
   Rectangle()
   {
      width = 1;
      height = 1;
   }
   Rectangle(double a, double b)
   {
      width = a;
      height = b;
   }
   void set()
   {
      cout << "Input for Rectangle: " << endl;
      cin >> width >> height;
   }
   double area()
   {
      double S = width * height;
      return S;
   }
   void print()
   {
      cout << "Area is: " << area() << endl;
   }
};
class Parallelogram : public Quadrilateral
{
private:
   double width;
   double height;

public:
   Parallelogram()
   {
      width = 1;
      height = 1;
   }
   Parallelogram(double a, double b)
   {
      width = a;
      height = b;
   }
   void set()
   {
      cout << "Input for Parallelogram: " << endl;
      cin >> width >> height;
   }
   double area()
   {
      double S = width * height;
      return S;
   }
   void print()
   {
      cout << "Area is: " << area() << endl;
   }
};
class Trapezium : public Quadrilateral
{
private:
   double width1;
   double width2;
   double height;

public:
   Trapezium()
   {
      width1 = 1;
      width2 = 1;
      height = 1;
   }
   Trapezium(double a, double b, double c)
   {
      width1 = a;
      width2 = b;
      height = c;
   }
   double area()
   {
      double S = (1 / 2.0) * (width1 + width2) * height;
      return S;
   }
   void print()
   {
      cout << "Area is: " << area() << endl;
   }
   void set()
   {
      cout << "Input for Trapezium: " << endl;
      cin >> width1 >> width2 >> height;
   }
};

void print_area(Quadrilateral *array)
{
   array->print();
}

int main()
{

   Quadrilateral *array[] = {new Rectangle(), new Parallelogram(), new Trapezium()};
   double area_array[3]; 

   int l = sizeof(array) / sizeof(*array);
   for (int i = 0; i < l; i++)
   {
      array[i]->set();
   }

   for(int i = 0; i < 3; i++){
      area_array[i] = array[i] -> area(); 
   }
   cout << endl; 
   for (int i = 0; i < l; i++)
   {
      print_area(array[i]);
   }

   sort(area_array, area_array + 3, greater<int>());
   cout << endl; 
   cout << "Array after sorting : \n";
   for (int i = 0; i < 3; ++i)
      cout << "The Area is: " << area_array[i] << endl;

   return 0;
}