#include <iostream>
#include "Eigen"

using namespace std;
using namespace Eigen;

int main()
{
    Matrix <float, 3, 3> matrixA;
    matrixA.setZero();
    cout << matrixA << endl;
}