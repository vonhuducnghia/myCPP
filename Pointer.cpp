#include <stdio.h>
#include <iostream>
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

    char alpha = 'A';
    int x;
    char *pa;
    // variable is a single char so require & prefix | pa = &<variable_name>;
    pa = &alpha;    //initialize pointer
    for(x = 0; x < 26; x++)
    {
        putchar((*pa)++);
    }
    putchar('\n');
}