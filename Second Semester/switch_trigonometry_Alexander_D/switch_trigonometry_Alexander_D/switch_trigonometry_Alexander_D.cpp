#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "What trigonometric function do you want to apply:" << endl;
    cout << "1. Sin" << endl;
    cout << "2. Cos" << endl;
    cout << "3. Tan" << endl;
    cout << "4. Cotg" << endl;

    int id;

    cin >> id;

    cout << "The number that you want the function to apply to: ";

    double number;
    cin >> number;

    switch (id)
    {
    case 1:
        cout << "Result = " << sin(number) << endl;
        break;
    case 2:
        cout << "Result = " << cos(number) << endl;
        break;
    case 3:
        if (number == 90 || number == 270)
        {

            cout << "\nTg " << number << " is infinity or undefined" << endl; 
            break;
        }
        else
        {
            cout << tan(number);  
            break;
        }
    case 4:
        if (number == 0 || number == 180 || number == 360)
        {
            cout << "\nCotg " << number << " is infinity or undefined" << endl; 
            break;

        }
        else
        {
            cout << 1 / tan(number);
            break;
        }      
    default:
        break;
    }
}
