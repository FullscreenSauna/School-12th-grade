#include <iostream>

using namespace std;

int main()
{
	cout << "Emter an arithmetic expression in the format:" << endl;
	cout << "number operator number" << endl;

	int num1, num2;
	char mathematicalOperator;

	cin >> num1 >> mathematicalOperator >> num2;

	switch (mathematicalOperator)
	{
	case '+': cout << "Result: " << num1 + num2 << endl; break;
	case '-': cout << "Result: " << num1 - num2 << endl; break;
	case '*': cout << "Result: " << num1 * num2 << endl; break;
	case '/':
		if (num2 != 0)
		{
			cout << "Result: " << num1 / num2 << endl;
		}
		break;
	case '%':
		if (num2 != 0)
		{
			cout << "Result: " << num1 % num2 << endl;
		}
		break;
	default: cout << "Wrong input";
	}
}
