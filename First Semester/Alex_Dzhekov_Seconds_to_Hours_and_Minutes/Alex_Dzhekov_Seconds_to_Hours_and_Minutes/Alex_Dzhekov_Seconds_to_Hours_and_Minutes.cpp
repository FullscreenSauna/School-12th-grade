#include <iostream>
using namespace std;

int main()
{
    int seconds;

    cout << "Seconds: ";
    cin >> seconds;

    int minutes, hours;
    
    hours = seconds / 3600;

    if (hours > 0)
    {
        seconds = seconds % 3600;
        minutes = seconds / 60;
        seconds = seconds % 60;

        cout << "Time = " << hours << "h, " << minutes << "m and " << seconds << "s" << endl;
    }
    else
    {
        minutes = seconds / 60;
        seconds = seconds % 60;

        cout << "Time = " << minutes << "m and " << seconds << "s" << endl;
    }
    //cout << "Minutes: " << minutes << endl;
}
