#include <iostream>
using namespace std;

int main()
{
    int hours, minutes, seconds;
    
    cout << "Hours: ";
    cin >> hours;
    
    cout << "Minutes: ";
    cin >> minutes;

    cout << "Seconds: ";
    cin >> seconds;

    int time = hours * 3600 + minutes * 60 + seconds;
    cout << "Time: " << time << "s" << endl;
}
