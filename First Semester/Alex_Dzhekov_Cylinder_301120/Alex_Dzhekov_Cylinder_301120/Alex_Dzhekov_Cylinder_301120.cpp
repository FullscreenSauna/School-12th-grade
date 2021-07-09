#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const double PI = 3.141592653589793;

bool isNumber(string number)
{
	bool isNumber = true;

	for (size_t i = 0; i < number.size(); i++)
	{
		if (!isdigit(number[i]) && number[i] != '.')
		{
			isNumber = false;
			break;
		}
	}

	return isNumber;
}

int main()
{
	string r, l;

	cout << "Input R: ";
	cin >> r;

	cout << "Input l: ";
	cin >> l;

	bool xIsValid = isNumber(r);
	bool nIsValid = isNumber(l);

	if (xIsValid && nIsValid)
	{
		double firstNum = stod(r);
		double secondNum = stod(l);

		double P = 2 * PI * firstNum;
		double S = P * secondNum;
		double B = PI * pow(firstNum, 2);

		double S1 = S + 2 * B;
		double V = B * secondNum;

		cout << "S1 = " << S1 << endl;
		cout << "V = " << V << endl;
	}
	else
	{
		cout << "Please input valid numbers" << endl;
	}
}

