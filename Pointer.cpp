#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

// NOTATION:
// A pointer is a variable that contains a memory location.
// type *name;
// The *pointer variable peeks into the value stored at that memory location.
// Pointer's address: virtual address + sizeof(data_type)   |   example: 0x8000 + sizeof(char/ int/ float/ double/...)

int main()
{
    /*
	int x = 10;
	cout << x << '\n';
	cout << &x << '\n';
    cout << *&x << '\n';

    *&x = 20;
    cout << x << endl;

    int i1 = 30;
    int &i_ref = i1;        //reference to i1, not means address of i1

    cout << &i1 << endl;    //get address of i1
    cout << &i_ref << endl; //get address of i_ref
    */
    /*char lead;
    char *sidekick;

    lead = 'A';
    sidekick = &lead;
    cout << "About variable 'lead':\n";
    cout << "Size\t" << sizeof(lead) << endl;
    cout << "Contents\t" << lead << endl;
    cout << "Location\t" << (void*)&lead << endl;
    cout << "About variable 'sidekick': " << endl;
    cout << "Contents\t" << (void*)sidekick << endl;
    cout << "Peek value\t" << *sidekick << endl;*/

    /*char a, b, c, e;
    int d;
    char *p;
    int *in;
    a = 'A', b = 'B', c = 'C';
    d = 70;
    cout << "Know your " << endl;
    p = &a;
    putchar(*p);
    p = &b;
    putchar(*p);
    p = &c;
    putchar(*p);
    p = &e;
    *p = 'E';
    printf("\nKnow your %c\n", e);
    in = &d;
    cout << "Value in 'in' variable: " << *in << endl;*/

    /*int age, *pAge;
    float weight, *pWeight;
    
    pAge = &age;
    pWeight = &weight;
    *pAge = 19;
    *pWeight = 47.5;
    cout << "My age is: " << age << endl;
    cout << "My weight is: " << weight << endl;*/

    /*int arr1[] = {2, 4, 6, 8};
    cout << "'arr1' is at address: " << &arr1 << endl;
    cout << "'arr1' is at address: " << arr1 << endl;*/

    /*int arr2[10];
    int i;
    int *pArr2;
    pArr2 = arr2;   // The '&' isn’t needed here, because "arr2" is an array, not an individual variable.
    for (i = 0; i < 10; i++)
    {
        *pArr2 = i + 1;
        pArr2++;
    }
    pArr2 = arr2;
    for (i = 0; i < 10; i++)
    {
        printf("arr2[%d] = %d\n", i, arr2[i]);
        printf("address %p\n", &arr2[i]);
    }*/

    /*char arr3[26];
    char *pArr3;
    int i;
    pArr3 = arr3;
    for (i = 0; i < 26; i++)
    {
        *pArr3 = i + 'A';   // *pArr3++ = i + 'A'; 
        pArr3++;
    }
    pArr3 = arr3;   // re-initialize pointer
    for (i = 0; i < 26; i++)
    {
        //printf("%c", arr3[i]);
        putchar(*pArr3);
        pArr3++;
    }*/

    /*char alpha = 'A';
    int x;
    char *pa;
    // variable is a single char so require & prefix | pa = &<variable_name>;
    pa = &alpha;    // initialize pointer
    for(x = 0; x < 26; x++)
    {
        putchar((*pa)++);
        //cout << (void*)pa << endl;
    }
    putchar('\n');*/

    /*int nArr[10] = {1, 2, 3, 4, 5 ,6 ,7 ,8 ,9, 0};
    int *pArr;
    int n;
    pArr = nArr;
    cout << "Enter the index to pull out: ";
    cin >> n;
    // Array Notation Replaced by Pointers
    // alpha[n] or *(a+n)
    cout << *(pArr + n - 1) << endl;*/

    /*enum weekdays { mon, tues, wed, thurs, fri};  // enumeration (enum) function
    float temps[5] = { 18.7, 22.8, 25.0, 23.3, 23.2};
    float *ptemps;
    ptemps = temps;
    printf("The temperature on Tuesday was %.1f\n" /*temps[tues]*///, *(ptemps + tues));
    //printf("The temperature on Friday was %.1f\n" /*temps[fri]*///, *(ptemps + fri));
    //cout << "The temperature on Tuesday was " << *(ptemps + tues) << endl;
    //cout << "The temperature on Friday was " << *(ptemps + fri) << endl;*/

    /*char sample[] = "From whence cometh my help?\n";
    char *pSample;
    int index = 0;
    pSample = sample;
    while (sample[index] != 0)
    {
        putchar(sample[index]);
        index++;
    }
    while (*pSample)
    {
        putchar(*pSample);
        pSample++;
    }*/

    // Using a pointer to declare a string
    /*const char *pStr = "From whence cometh my help?\n";     // You cannot use this convention to initialize a numeric array.

    // This is a pointer to a constant character.
    //You cannot change the value pointed by ptr, but you can change the pointer itself.
    //“const char *” is a (non-const) pointer to a const char.

    puts(pStr);     // Function: int puts(const char *str)

    char str1[15];
    strcpy(str1, "QTMteam");    // Copy string;
    puts(str1);*/

    const char *pFruit[] = {"apple", "banana", "pear", "watermelon", "coconut", "grape"};
    int x = 0, i = 0;
    /*for (x; x < 6; x++)
    {
        puts(pFruit[x]);    // or puts(*(pFruit + x));
    }*/

    /*for (x; x < 6; x++)
    {
        putchar(**(pFruit+x));
        putchar('\n');
    }*/

    for (x; x < 6; x++)
    {
        for (i; i < 42; i++)
        {
        putchar(*(*(pFruit + x) + i));
        }
    }
}