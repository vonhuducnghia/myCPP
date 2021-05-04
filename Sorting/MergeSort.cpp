#include <iostream>
using namespace std;

void MergeSort(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1; // length of sub arr[l...m]
    int n2 = r - m; // length of sub arr[m+1...r]

    // Create temp arrays using pointer
    int *L1 = new int[n1];
    int *R1 = new int[n2];

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        R[j] = arr[m + 1 + j];
    }
}