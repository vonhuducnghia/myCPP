#include <iostream>  
using namespace std;

int Ngcd = 0;
// Demo for Parameterised Constructor
/*class Mayvitinh
{ 
    int chieurong;   
    int chieudai; 
    string tenmay;
    public:
       Mayvitinh(int cd, string tm)
       {    
            chieudai = cd;    
            tenmay = tm;
            chieurong = 20;
       }
       Mayvitinh(int cd, string tm, int cr)
       {    
            chieudai = cd;    
            tenmay = tm;    
            chieurong = cr; 
       }    
       void HienThi()
       {    
            cout << tenmay << endl;
            cout << "   Chieu dai: " << chieudai << endl;
            cout << "   Chieu rong: " << chieurong << endl;
       }    
};*/
int gcd(int numer, int deno)
{
     if (deno == 0)
     {
          return numer;
     }
     Ngcd = gcd(deno, numer % deno);
     return Ngcd;
}

class fractionwith
{
     int numer, deno;
     public:

     fractionwith()
     {
          numer = 1;
          deno = 1;
     }

     fractionwith(int ginumer, int gideno)
     {
          numer = ginumer;
          deno = gideno;
     }

     void  Display()
     {
          if (Ngcd == 1)
          {
               cout << numer << '/' << deno;
          }
          else
          {
               cout << numer/Ngcd << '/' << deno/Ngcd;
          }
     }
};

int main()
{  
    /*Mayvitinh mayAsus =  Mayvitinh(50, "may Asus", 25);    
    Mayvitinh mayAcer =  Mayvitinh(45, "mau Acer");
    Mayvitinh mayMac =  Mayvitinh(30, "may Mac");
    mayAsus.HienThi();    
    mayAcer.HienThi();
    mayMac.HienThi();*/
    fractionwith no1 = fractionwith(3, 15);
    no1.Display();
    return 0;
}