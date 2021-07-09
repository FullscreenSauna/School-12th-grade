#include <iostream>
#include <cmath>

using namespace std;

double square(double num) 
{
    double result = num * num;
    return result;
}

int main()
{
    double input;

    cout << "Input a number: ";

    cin >> input; 

    double squareOfInput = square(input); ;
    
    cout << "square(a) = " << squareOfInput << endl;
    
    cout << "pow(a, 2) = " << pow(input, 2) << endl; 
}
