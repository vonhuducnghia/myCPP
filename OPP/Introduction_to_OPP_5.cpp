#include <iostream>

class complexnum
{
    private:
    double real, imag;

    public:
    // set default value as 0.0 + 0.0i
    complex(double real = 0.0, double imag = 0.0);
    double getReal() const;
    void setReal(double real);
    double getImag() const;
    void setImag(double imag);

    void setValue(double real, double imag);

    void print() const;

    // verify whether the numbers
    bool isReal() const;
    bool isImag() const;
}