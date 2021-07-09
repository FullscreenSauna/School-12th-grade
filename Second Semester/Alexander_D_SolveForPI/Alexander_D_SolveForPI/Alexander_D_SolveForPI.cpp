#include <iostream>

using namespace std;

int main()
{
    cout << "How many terms do you want to calculate?" << endl;

    int n;
    cin >> n;

    int denominator = 3;

    double sum = 1;

    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= 1.0 / denominator;
        }
        else
        {
            sum += 1.0 / denominator;
        }

        denominator += 2;
    }

    cout << "PI = " << sum * 4;
}
