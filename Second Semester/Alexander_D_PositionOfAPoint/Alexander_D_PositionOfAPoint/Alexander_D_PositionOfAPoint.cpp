#include <iostream>

using namespace std;

void determinePosition(double x, double y) 
{
    if (x == 0 && y == 0)
    {
        cout << "The point is at the origin";
    }
    else if (x == 0 && y > 0)
    {
        cout << "The point is on the positive Y-axis";
    }
    else if (x == 0 && y < 0)
    {
        cout << "The point is on the negative Y-axis";
    }
    else if (x > 0 && y == 0)
    {
        cout << "The point is on the positive X-axis";
    }
    else if (x < 0 && y == 0)
    {
        cout << "The point is on the negative X-axis";
    }
    else if (x > 0 && y > 0)
    {
        cout << "The point is in the 1st quadrant";
    }
    else if (x < 0 && y > 0)
    {
        cout << "The point is in the 2nd quadrant";
    }
    else if (x < 0 && y < 0)
    {
        cout << "The point is in the 3rd quadrant";
    }
    else if (x > 0 && y < 0)
    {
        cout << "The point is in the 4th quadrant";
    }
}

int main()
{
    double x, y;

    cout << "Input the following parameters:" << endl;

    cout << "The X of the point: ";
    cin >> x;

    cout << "The Y of the point: ";
    cin >> y;

    determinePosition(x, y);
}
