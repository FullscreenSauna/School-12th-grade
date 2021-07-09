#include <iostream>
#include <cmath>

using namespace std;


double discriminant(double a, double b, double c)
{
	double D = pow(b, 2) - 4 * a * c;
}

void quadratic_equation(double a, double b, double c)
{
	double D = discriminant(a, b, c);

	if (D > 0)
	{
		double x1 = (-b + sqrt(D)) / 2 * a;
		double x2 = (-b - sqrt(D)) / 2 * a;

		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else if (D == 0)
	{
		double x1 = -b / 2 * a;

		cout << "x1 = " << x1 << endl;
	}
	else if (D < 0)
	{
		cout << "No real roots" << endl;
	}
}

int main()
{
	cout << "Enter the 3 variables (a, b, c):" << endl;

	double a, b, c;

	cin >> a >> b >> c;

	if (a == 0)
	{
		if (b == 0)
		{
			if (c == 0)
			{
				cout << "Every number is a solution" << endl;
			}
			else
			{
				cout << "Equation is meaningless" << endl;
			}
		}
		else
		{
			if (c == 0)
			{
				cout << "Only one root: " << b << endl;
			}
			else
			{
				cout << "Only one root: " << -c / b << endl;
			}
		}
	}
	else
	{
		quadratic_equation(a, b, c);
	}
}