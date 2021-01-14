#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <limits>
#include <string.h>
using namespace std;

void encrypt(char c, int key[][2])
{
  int x[1][2] = {0}; 
  for(int i = 0; i < strlen(c); i+=2)
  {
    for(int j = i; j < i + 2; j++){
    //each pl[1][j] equal to int(c): (a b)/c[] -> (97 98)/pl[][]
    pl[1][j%2] = (int)c[j] - 97; 
    //start to encrypt
    for(int t = 0; t < 1; t++)
      {
        for(int v = 0; v < 2; v++)
          { 
            for(int u = 0; u < 2; u++)
              {
                x[t][v] += pl[t][u]key[u][v]; 
              }
          }
      }
      c[j] = (char)(x[1][j%2]%26 + 97); 
    }
  }

    printf("\nEncrypt string is: "); 
    for(int i = 0; i < 1; i++){
            printf("%c", c[i]);
    }
}
// mod and inverse
int modInverse(int a, int b)
{
	int b0 = b, t, q;
	int x0 = 0, x1 = 1;
	if (b == 1) return 1;
	while (a > 1)
  {
		q = a / b;
		t = b, b = a % b, a = t;
		t = x0, x0 = x1 - q * x0, x1 = t;
	}
	if (x1 < 0) x1 += b0;
	return x1;
}

// convert char to integer
char CharToInt(char a)
{
  return (int)a;
}

// convert integer to char
char IntToChar(int a)
{
  return (char)a;
}

int main()
{
    int m, n, p, i, j, h, x, y;
    char plaintext[50];
    int arr4[2];
    // Choose e for encrypt and d for decrypt
	  /*string choice;
	  do
    {
		cout << "Encrypt or Decrypt? [e/d] = ";
		getline(cin, choice);
		transform(choice.begin(), choice.end(), choice.begin(), ::tolower);
	  }
    while(choice != "e" && choice != "d");*/


    cout << "Input plaintext: ";
    scanf("%s", &plaintext);
    cin.ignore(32767, '\n');
    //cout << "Your plaintext is: " << plaintext << "\n";

    cout << "Input size of matrix you want for plaintext (must be valid to calculate)\n";
    cout << "Input size x: ";
    cin >> x;
    cout << "Input size y: ";
    cin >> y;
    int plaintext1[x][y];
    cout << "Enter size m for key matrix (must be square matrix): ";
    cin >> m;
    int arr1[m][m]; // key matrix
    //cout << "Enter size n for array2: ";
    //cin >> n;
    int arr2[n][m]; //
    int arr3[x][m]; //

    cout << "\nEnter the key matrix (array1):\n";  // input key matrix
    for (i = 0; i < m; i++)
    {
      for (j = 0; j < m; j++)
      {
         scanf("%d", &arr1[i][j]);
      }
    }

    cout << "Convert plain text to integer corresponding to the alphaber:\n";
	  int k = 0; 
	  for (int i = 0; i < x; i++)
	  { 
		  for (int j = 0; j < y; j++) 
		  {
			  plaintext1[i][j] = (plaintext[k]) - 97; 
			  k++;
        cout << plaintext1[i][j] << endl;
		  } 
	  }
    int sum = 0;
    for (i = 0; i < x; i++)
    {
      for (j = 0; j < m; j++)
      {
        for (k = 0; k < m; k++)
        {
          sum = sum + plaintext1[i][k] * arr1[k][j];
        }
      }
      arr3[i][j] = (sum % 26);
      cout << arr3[i][j] << "\t" << endl;
    }
    //arr4[2] = (sum % 26) + 65;
    //cout << arr4 << endl;
    /*cout << "Product of 2 matrices: " << endl;
    for (i = 0; i < x; i++)
    {
      for (j = 0; j < m; j++)
      {
        cout << arr3[i][j];
      }
      cout << "\n";
    }*/
}