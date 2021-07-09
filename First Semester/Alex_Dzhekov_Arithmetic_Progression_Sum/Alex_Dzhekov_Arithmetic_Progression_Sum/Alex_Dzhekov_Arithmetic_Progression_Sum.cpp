#include <iostream>
using namespace std;

int main()
{
    int firstNum, lastNum, difference;

    cout << "First num:" << endl;
    cin >> firstNum;
    cout << "Last num:" << endl;
    cin >> lastNum;
    cout << "Difference:" << endl;
    cin >> difference;

    int n = (((lastNum - firstNum) / difference) + 1);

    int sum = (n / 2) * (firstNum + lastNum);

    cout << "Sum = " << sum;
}
