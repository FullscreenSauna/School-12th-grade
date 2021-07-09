#include <iostream>
using namespace std;

int main()
{
    int a, b, x, y;
    cout << "Enter the two sides of a rectangle (a,b) and the coordinates of a point (x,y)" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    if (a >= x && b >= y && x >= 0 && y >= 0)
    {
        cout << "The point is inside of the rectangle";
    }
    else
    {
        cout << "The point is outside of the rectangle";
    }
}

