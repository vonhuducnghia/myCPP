#include <iostream>
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

    Time operator + (Time const &obj)
    {
        Time res;
        res.hours = hours + obj.hours;
        res.minutes = minutes + obj.minutes;
        res.seconds = seconds + obj.seconds;
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

    void convert()
    {
        if (seconds = 60)
        {
            
            minutes++;
        }
    }

    void display()
    {
        cout << hours << ':' << minutes << ':' << seconds << endl;
    }
};