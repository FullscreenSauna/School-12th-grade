#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "Enter an integer (a) 1<a<10: ";

    int a;
    cin >> a;

    while (a < 2 || a > 9)
    {
        cout << "a is out of bounds!!";
        cout << endl;
        cout << "Enter an integer (a) 1<a<10: ";
        cin >> a;
    }

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            cout << setw(3) << i * j;
        }
        cout << endl;
    }
}
