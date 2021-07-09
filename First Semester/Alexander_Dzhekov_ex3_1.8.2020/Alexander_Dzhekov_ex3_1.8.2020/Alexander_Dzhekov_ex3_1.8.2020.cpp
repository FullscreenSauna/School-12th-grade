#include <iostream>
#include <cmath>
using namespace std;

double calculateResult(int n)
{
    double result = 1 / sqrt(5) * (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / n), 2));
    return result;
}

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        cout << "N = " << i << ": " << calculateResult(i) << endl;
    }
}