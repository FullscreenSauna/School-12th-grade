#include <iostream>

using namespace std;

int main()
{
    cout << "How many numbers do you want to add together?" << endl;

    int n;

    cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "Enter the first number" << endl;
        }
        else
        {
            cout << "Enter the next number" << endl;
        }

        int x;
        cin >> x;

        sum += x;
    }

    cout << "Sum = " << sum;
}