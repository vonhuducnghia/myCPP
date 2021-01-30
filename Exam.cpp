#include <iostream>
#include <stdio.h>
using namespace std;

// Prompt 1
float sum(float number1, float number2)
{
    return number1 + number2;
}

// Prompt 2
float sum_array(float *array, int length)
{
    if (length == 0)
    {
        return *array;
    }
    return *(array + length) + sum_array(array, length - 1);
}

// Another approach for prompt 2
float sum_arrayX(float *array, int length)
{
    float sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum;
}

// Prompt 3


int main()
{
    int length;
    cin >> length;
    float array1[length] = {1,2,3,4};
    cout << "Sum of elements in array: " << sum_arrayX(array1, length) << endl;
}