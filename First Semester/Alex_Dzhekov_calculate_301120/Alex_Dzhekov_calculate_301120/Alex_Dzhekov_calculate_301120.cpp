#include <iostream>
#include <cmath>
#include <string>

using namespace std;

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
	string x, n;

	cout << "Input x: ";
	cin >> x;

	cout << "Input n: ";
	cin >> n;

	bool xIsValid = isNumber(x);
	bool nIsValid = isNumber(n);
	
	
	if (xIsValid && nIsValid)
	{
		double firstNum = stod(x);
		double secondNum = stod(n);

		double result = 1 + (secondNum * firstNum) + (secondNum * (secondNum - 1) * firstNum) / 2;
		cout << "Result = " << result << endl;
	}
	else
	{
		cout << "Please input numbers" << endl;
	}
}

