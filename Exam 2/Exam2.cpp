#include <bits/stdc++.h>
using namespace std;

double findShapeperimeter(double cord[][2], int n) {
   
   double perimeter = 0.0;
   int j = n - 1;
   for (int i = 0; i < n; i++) {
      perimeter += sqrt((cord[j][0] - cord[i][0]) * (cord[j][0] - cord[i][0]) + (cord[j][1] - cord[i][1]) * (cord[j][1] - cord[i][1]));
      j = i;
   }
   return perimeter;
}

int main()
{
   
   int n = 4;
   double cord[n][2] = {{0, 0} , {2, 0}, {2, 2}, {0, 2}};
   cout << "The perimeter is: ";
   cout << findShapeperimeter(cord, n);
   /*if (isEquableShape(cord, n))
      cout<<"The given shape is an equable shape";
   else
      cout<<"The given shape is not an equable shape";*/
   return 0;
}