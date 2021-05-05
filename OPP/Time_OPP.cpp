#include <iostream>
#include <conio.h>
using namespace std;

class Time
{
    private:
    int hours;
    int minutes;
    int seconds;

    public:
    // Default constructor
    Timedf()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }

    // Parameter constructor
    TimePara(int hr, int min, int sec)
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }
    void setTime();
    void show()
    {
        cout<< hours << ":" << minutes << ":" << seconds;
    }
    Time operator + (Time);
};

Time Time::operator + (Time t1)
{
    Time res;
    int a, b;
    a = seconds + t1.seconds;
    res.seconds = a%60;
    b = (a/60) + minutes + t1.minutes;
    res.minutes = b%60;
    res.hours = (b/60) + hours + t1.hours;
    res.hours = res.hours % 24;
    return res;
}

    // Another option for Overloaded operator
    // Time operator - (const Time &obj)
    // {
    //     Time res;
    //     res.hours = this->hours - res.hours;
    //     res.minutes = this->minutes - res.minutes;
    //     res.seconds = this->seconds - res.seconds;
    //     return res;
    // }

void Time::setTime()
{
    cout << "\n Enter the hour(0-24) ";
    cin >> this->hours;
    cout << "\n Enter the minute(0-59) ";
    cin >> this->minutes;
    cout << "\n Enter the second(0-59) ";
    cin >> this->seconds;
}

int main()
{
    Time t1, t2, t3;
 
    cout << "\n Enter the first time ";
    t1.setTime();
    cout << "\n Enter the second time ";
    t2.setTime();
    t3 = t1 + t2;	//adding of two time object using '+' operator
    cout << "\n First time ";
    t1.show();
    cout << "\n Second time ";
    t2.show();
    cout << "\n Sum of times ";
    t3.show();
    getch();
}