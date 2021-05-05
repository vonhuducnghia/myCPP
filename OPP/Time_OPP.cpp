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
};