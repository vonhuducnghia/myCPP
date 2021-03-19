#include <iostream>  
using namespace std;

// Demo for Parameterised Constructor
class Mayvitinh
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
};  
  
int main()
{  
    Mayvitinh mayAsus =  Mayvitinh(50, "may Asus", 25);    
    Mayvitinh mayAcer =  Mayvitinh(45, "mau Acer");
    Mayvitinh mayMac =  Mayvitinh(30, "may Mac");
    mayAsus.HienThi();    
    mayAcer.HienThi();
    mayMac.HienThi();
    return 0;
}