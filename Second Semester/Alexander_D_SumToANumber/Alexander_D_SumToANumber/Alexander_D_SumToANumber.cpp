#include <iostream>

using namespace std;

int main()
{
    cout << "Up to which numer do you want to add?" << endl;

    int n;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    cout << "Sum = " << sum;
}
