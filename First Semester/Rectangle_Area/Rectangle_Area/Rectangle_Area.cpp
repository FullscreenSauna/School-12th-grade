#include <iostream>
using namespace std;

int main()
{
	double a;
	double b;
	cout << "First side = ";
	cin >> a;
	cout << "Second side = ";
	cin >> b;

	if (b > 0 && a > 0)
	{
		cout << "Area = " << b * a;
	}
	else
	{
		cout << "Sides must be positive numbers";
	}
}
