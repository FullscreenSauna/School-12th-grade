#include <iostream>
#include <cmath>
using namespace std;

// x ^ 2 + 5.6 -> x = 121.3
double firstEquation(double x)
{
	return (pow(x, 2) + 5.6);
}

//|x - 2y| / x ^2 + y^2 -> x = -3.21 and y = 2.56 
double secondEquation(double x, double y)
{
	if (x != 0 && y != 0)
	{
		return (abs(x - 2 * y)) / pow(x, 2) + pow(y, 2);
	}
	else
	{
		return 0;
	}
}

//sqrt(1 + x^2 + y^2 + 3) -> x = 15.02 and y = 3.73
double thirdEquaton(double x, double y)
{
	return sqrt(1 + pow(x, 2) + pow(y, 2) + 3);
}

int main()
{
	double x, y;

	cout << "x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	if (isdigit(x) && isdigit(y))
	{
		cout << "first equation: x ^ 2 + 5.6 = " << firstEquation(x) << endl;
		cout << "second equation: |x - 2y| / x ^2 + y^2 = " << secondEquation(x, y) << endl;
		cout << "third equation: sqrt(1 + x^2 + y^2 + 3) ="  << thirdEquaton(x, y) << endl;
	}
	else
	{
		cout << "Invalid input";
	}
}
