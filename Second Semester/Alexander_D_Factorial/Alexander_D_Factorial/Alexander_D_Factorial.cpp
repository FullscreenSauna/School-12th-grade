#include <iostream>

using namespace std;

int generateFactorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * generateFactorial(n - 1);
	}
}

int main()
{
	cout << "Enter n: ";

	int n;
	cin >> n;

	while (n < 0)
	{
		cout << "Invalid Input!" << endl;
		cout << "Enter n (n > 0): ";
		cin >> n;
	}

	int factorial = generateFactorial(n);

	cout << endl;
	cout << "Factorial of " << n << " is: " << factorial << endl;
}

