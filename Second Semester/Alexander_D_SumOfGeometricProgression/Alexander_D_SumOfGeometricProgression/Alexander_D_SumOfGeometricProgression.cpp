#include <iostream>

using namespace std;

int main()
{
    cout << "How many terms dou you want to calcilate for?" << endl;

    int n;
    cin >> n;

    double sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += pow(i, -1.0);
    }

    cout << "Sum = " << sum;
}
