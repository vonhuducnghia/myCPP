#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
    printf("Affine Cipher\n");
    int a, b, length, choice;
    char e, d, CTxt;
    printf("Enter context: ");
    char msg[100];
    cin.getline(msg,100);   // take the message as input
    length = strlen(msg);
    printf("Enter a: ");  // take the key a and b
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter 1 for encryption or 2 for decryption: ");
    scanf("%d", &choice);
    // for encryption
    if (choice == 1)
    {
        for (int i = 0; i < msg[i]; i++)
        {
            CTxt = CTxt + (char) ((((a * msg[i] - 65) + b) % 26) + 65);
        }
        cout << "The encrypted message is:\n " << CTxt;
    }
    
    else if (choice == 2)
    {
        for (int i = 0; i < msg[i]; i++)
        {
            CTxt = CTxt + (char) ((((a * msg[i] -65) - b) %26) + 65);
        }
        cout << "The decrypted message is:\n " << CTxt;
    }
    return 0;
}