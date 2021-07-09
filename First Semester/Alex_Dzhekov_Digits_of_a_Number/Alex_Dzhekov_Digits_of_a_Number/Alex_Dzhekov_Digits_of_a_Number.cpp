#include <iostream>
using namespace std;

void print_each_digit(int x)
{
	if (x >= 10) 
	{
		print_each_digit(x / 10);
	}

	int digit = x % 10;

	cout << digit << endl;
}

int main()
{
	cout << "Input a number: ";

	int number;
	cin >> number;

	print_each_digit(number);
}
