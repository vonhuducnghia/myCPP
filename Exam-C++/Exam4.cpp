#include <iostream>
using namespace std;

class Complex
{
   public:
   double real,imag;
   Complex(double re,double im):real(re),imag(im){}
   Complex()
{
   real = 0;
   imag = 0;
}
void display() const;
//overloading operators
Complex operator+(const Complex);
bool operator==(const Complex);
//Complex operator=(const Complex);
};
void Complex::display() const    //Note that the definition of a function must match the prototype. I.e.
{
   if(imag < 0)
      if(imag == -1)
         cout << "The complex number is: "<< real << " - i" << endl;
      else
         cout << "The complex number is: "<< real << imag << "i" << endl;
      else
         if(imag == 1)
            cout << "The complex number is: "<< real << " + i"<< endl;
         else
            cout << "The complex number is: "<< real << " + " << imag << "i" <<
   endl;
}
Complex Complex::operator+(const Complex c1)
{
   Complex temp;
   temp.real = real + c1.real;
   temp.imag = imag + c1.imag;
   return temp;
}
bool Complex::operator==(const Complex c1)
{
   if(real == c1.real && imag == c1.imag)
   {
      return true;
   }
  else
  return false;
}
/*Complex Complex::operator=(const Complex c1)
{
   Complex temp;
   temp.real = c1.real;
   temp.imag = c1.imag;
   return temp;
}*/
int main()
{
   Complex a, b, c, f;
   
   cout << "Enter real and complex coefficient of the first complex number: " << endl;
   cin >> a.real;
   cin >> a.imag;

   cout << "Enter real and complex coefficient of the second complex number: " << endl;
   cin >> b.real;
   cin >> b.imag;

   cout << "Enter real and complex coefficient of the third complex number: " << endl;
   cin >> f.real;
   cin >> f.imag;

   cout << "Comparison 2 complex numbers (1 is true, 0 is false): ";
   bool d = (a == b);
   cout << d << endl;
   cout << "Addition Result:\n";
   c = a + b;
   c.display();
   cout << "\nAssign a complex number:\n";
   f = a;
   f.display();
   
}