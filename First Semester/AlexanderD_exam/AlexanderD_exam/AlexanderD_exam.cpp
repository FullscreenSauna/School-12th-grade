#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 5 numbers:" << endl;
    int currentNum, currentHighestNum, sum;

    cin >> currentNum;
    
    sum = currentNum;
    currentHighestNum = currentNum;

    for (int i = 0; i < 4; i++)
    {
        cin >> currentNum;

        sum += currentNum;

        if (currentNum > currentHighestNum)
        {
            currentHighestNum = currentNum;
        }
    }

    cout << "Biggest number = " << currentHighestNum << endl;
    cout << "Sum = " << sum << endl;
}
