

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    if (a != 0)
    {
        double D = (b * b) - 4 * a * c;
        if (D < 0)
        {
            cout << "There are no real roots";
        }
        else if (D == 0)
        {
            cout << "x = " << -b / (2 * a) << endl;
        }
        else
        {
            cout << "x1 = " << (-b - sqrt(D)) / (2 * a) << endl;
            cout << "x2 = " << (-b + sqrt(D)) / (2 * a) << endl;
        }
    }
    else
    {
        cout << "The equation is not quadratic";
    }
}

