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
};
void Complex::display() const    //Note that the definition of a function must match the prototype. I.e.
{
   if(imag < 0)
   cout << real << imag << "i" << '\n';
   else
   cout << real << '+' << imag << "i" << '\n';
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
int main()
{
   Complex a, b, c;
   cout << "Enter real and complex coefficient of the first complex number: " << endl;
   cin >> a.real;
   cin >> a.imag;

   cout << "Enter real and complex coefficient of the second complex number: " << endl;
   cin >> b.real;
   cin >> b.imag;

   cout << "Addition Result: ";
   c = a + b;
   c.display();
}