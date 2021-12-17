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
bool operator>(const Complex);
Complex operator=(const Complex);
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

bool Complex::operator>(const Complex c1)
{
   if(real > c1.real && imag > c1.imag)
   {
      return true;
   }
  else
  return false;
}
/Complex Complex::operator=(const Complex)
{
   Complex temp;
   temp.real = c1.real;
   temp.imag = c1.imag;
   return temp;
}
int main()
{
   Complex a, b, c;
   bool f;
   
   cout << "Enter real and complex coefficient of the first complex number: " << endl;
   cin >> a.real;
   cin >> a.imag;

   cout << "Enter real and complex coefficient of the second complex number: " << endl;
   cin >> b.real;
   cin >> b.imag;
   f = a > b;
   cout << endl;
   cout << "Compare if a > b (1 is true and 0 is false): ";
   cout << f;
   
}