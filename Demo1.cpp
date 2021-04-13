#include <iostream>
#include <string.h>
#include <fstream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

class BankAccount
{
    private:
    int CustomerID;
    char CustomerName[25];
    char CustomerAddr[50];
    char AccOpenDate[10];   // input in form dd.mm.yyyy
    double Balance;
    double nBalance;

    public:
    void getData();
    void viewData();
    int DisplayInfo()
    {
        return CustomerID;
    }

    void ModifyBalance(double newValue)
    {
        Balance = newValue;
    }

    double newBalance()
    {
        return Balance;
    }
}s;

void BankAccount::getData()
{
    cout << "\n\nEnter client details...\n";
    cout << "Customer ID: "; cin >> CustomerID;
    cin.ignore();
    cout << "Customer Name: "; cin.getline(CustomerName, 25);
    cout << "Customer Address: "; cin.getline(CustomerAddr,50);
    cout << "Account opened date: "; cin.getline(AccOpenDate,10);
    cout << "Balance: "; cin >> Balance;
    cout << endl;
}

void BankAccount::viewData()
{
    cout << "Customer ID: " << CustomerID << endl;
    cout << "Customer Name: " << CustomerName << endl;
    cout << "Customer Address: " << CustomerAddr << endl;
    cout << "Account opened date: " << AccOpenDate << endl;
    cout << "Balance: " << Balance << endl;
    cout << endl;
}

/*
void ModifyBalance()
{
	int n;
    int pos;
	int flag = 0;
    fstream fio;
    fio.open("Client.dat", ios::in|ios::out|ios::binary);
	
	cout << "Please enter Customer ID you want to modify: ";
	cin >> n;
	
	while(fio.read((char*)&s,sizeof(s)))
	{
		pos=fio.tellg();
		if(n==s.DisplayInfo())
		{
			cout<< "The following Customer ID "<< n <<" will be modified with new data:\n";
			s.viewData();
			cout<< "\n\nNow Enter the New Balance: \n";
			s.getData();
			fio.seekg(pos-sizeof(s));
			fio.write((char*)&s,sizeof(s));
			flag++;
		}
	}
	fio.close();

	if(flag == 0)
		cout << "The Student ID " << n << " not found.\n\n";
}
*/

/*void addData()
{
	ofstream fout;
	fout.open("Clients.dat",ios::binary|ios::out|ios::app);
	s.getData();
	fout.write((char*)&s,sizeof(s));
	fout.close();
	cout<<"\nData Successfully Saved to File.\n";
}

void listData()
{
	ifstream fin;
	fin.open("Clients.dat",ios::in|ios::binary);
	while(fin.read((char*)&s,sizeof(s)))
	{
		s.viewData();
	}
	fin.close();
	cout<<"\nData Reading from File Successfully Done.\n";
}*/

int main()
{
    double value;
    BankAccount Client;
    cout << "Enter client data: " << endl;
    Client.getData();
    cout << "View client data: " << endl;
    Client.viewData();
    cout << "Balance modified value: "; cin >> value;
    Client.ModifyBalance(value);
    Client.viewData();
}