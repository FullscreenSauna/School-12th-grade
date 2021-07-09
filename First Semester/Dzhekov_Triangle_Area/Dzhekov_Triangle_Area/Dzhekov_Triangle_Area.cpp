#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double a, b, c;
    
    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;
   
    bool sidesArePositive = a > 0 && b > 0 && c > 0;
    bool triangleIsValid = a + b > c && b + c > a && a + c > b;

    if (sidesArePositive && triangleIsValid)
    {
        double semiPerimeter = (a + b + c) / 2;

        double area = sqrt(semiPerimeter * (semiPerimeter - a) * (semiPerimeter - b) * (semiPerimeter - c));

        cout << "Area = " << area << endl;
    }
    else
    {
        cout << "Invalid input" << endl;

        if (!sidesArePositive)
        {
            cout << "Sides must be positive!" << endl;
        }

        if (!triangleIsValid)
        {
            cout << "The sides must form a valid triangle" << endl;
        }
    }
}

