#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

string encryptionMessage(string Msg, int a, int b)
{
    string CTxt = "";
    for (int i = 0; i < Msg.length(); i++)
    {
      CTxt = CTxt + (char) ((((a * Msg[i]) + b) % 26) + 65);
    }
    return CTxt;
}
 
string decryptionMessage(string CTxt, int a, int b)
{
    string Msg = "";
    int a_inv = 0;
    int the_inverse = 0;
    for (int i = 0; i < 26; i++)
    {
        the_inverse = (a * i) % 26;
        if (the_inverse == 1)
        {
            a_inv = i;
        }
    }
    for (int i = 0; i < CTxt.length(); i++)
    {
        Msg = Msg + (char) (((a_inv * ((CTxt[i] - b)) % 26)) + 65);
    }
    return Msg;
}
int main(int argc, char **argv)
{
  int a, b;
  cout << "Enter the message: ";
  string message;
  cin >> message;
  cout << "Message is: " << message;
  cout << "\n";
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;
  cout << "\nEncrypted Message is : " << encryptionMessage(message);
  cout << "\nDecrypted Message is: " << decryptionMessage(
  encryptionMessage(message));
}