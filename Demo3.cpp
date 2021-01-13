#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <limits>
using namespace std;

int main()
{
    int m, n, i, j;
    int arr1[m][m];
    int arr2[n][n];
    char plaintext[50];

	string choice;
	do
    {
		cout << "Encrypt or Decrypt? [e/d] = ";
		getline(cin, choice);
		transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
	}
    while(choice != "e" && choice != "d");


    cout << "Input plaintext: ";
    scanf("%s", &plaintext);
    cin.ignore(32767, '\n');
    cout << "Your plaintext is: " << plaintext << "\n";
    cout << "Enter size m for key matrix: ";
    cin >> m;
    cout << "Enter size n for array2: ";
    cin >> n;
    printf("\nEnter the key matrix (array1): ");
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < m; j++)
      {
         scanf("%d", &arr1[i][j]);
      }
    }
}