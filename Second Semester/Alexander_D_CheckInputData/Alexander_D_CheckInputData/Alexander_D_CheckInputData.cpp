#include<iostream>

using namespace std;

int main()
{
	double x;

	do
	{
		cout << "Enter a number, x >= 0: ";
		cin >> x;
	} while (x <= 0);

	cout << sqrt(x) << endl;
}
