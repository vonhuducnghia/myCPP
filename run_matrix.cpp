#include "matrix.h"
#include <iostream>

int main(int argc, char **argv)
{
  QSMatrix<double> mat1(3, 3, 1.0);
  QSMatrix<double> mat2(3, 3, 2.0);

  QSMatrix<double> mat3 = mat1 * 5;

  for (int i=0; i<mat3.get_rows(); i++)
  {
    for (int j=0; j<mat3.get_cols(); j++)
    {
      std::cout << mat3(i,j) << '\t';
    }
    std::cout << std::endl;
  }

  return 0;
}