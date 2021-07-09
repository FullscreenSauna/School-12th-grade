#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a year: ";
    int year;
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0)
    {
        cout << "It's a leap year";
    }
    else
    {
        cout << "It's not a leap year";
    }
}
