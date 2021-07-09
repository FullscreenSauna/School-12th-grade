#include <iostream>

using namespace std;

int main()
{
	char operation = '+';

	double result = 0.0;

	double number;

	while (operation != '=')
	{
		cin >> number;

		switch (operation)
		{
		case '+':
			result += number;
			break;
		case '-':
			result -= number;
			break;
		case '*':
			result *= number;
			break;
		case '/':
			if (number != 0)
			{
				result /= number;
			}
			else
			{
				cout << "Error: division by 0 detected" << endl;
			}
			break;
		case '^':
			result = pow(result, number);
			break;
		default:
			cout << "Error: wrong operation" << endl;
			break;
		}
		
		cin >> operation;
	}

	cout << "Result = " << result << endl;
}

