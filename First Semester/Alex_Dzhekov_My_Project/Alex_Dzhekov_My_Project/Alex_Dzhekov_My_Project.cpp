#include <iostream>
#include<string>

using namespace std;

//The name says it all
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

//The name says it all
string wordToUpper(string word)
{
	for (size_t i = 0; i < word.size(); i++)
	{
		word[i] = toupper(word[i]);
	}

	return word;
}

int main()
{
	string firstNumInput, secondNumInput;

	string answer = "YES";

	//Asks if the user wants to continue and if "yes" the main function repeats
	while (wordToUpper(answer) == "YES")
	{
		//Gets input from the user in the form of strings to enable checking of validity of the input
		cout << "Enter first number: ";
		cin >> firstNumInput;

		cout << "Enter second number: ";
		cin >> secondNumInput;

		//Checks the validity of the input
		if (isNumber(firstNumInput) && isNumber(secondNumInput))
		{
			//Converts the input to a double (for obvious reasons)
			double firstNum = stod(firstNumInput);
			double secondNum = stod(secondNumInput);

			cout << "Do you want to ADD(+), SUBTRACT(-), MULTIPLY(*) or DIVIDE(/) the two numbers" << endl;
			string operation;
			cin >> operation;

			operation = wordToUpper(operation);

			//The code below is a mess but it gets the job done and I don't plan on expanding it
			//Both word and symbol possibilities to avoid a confused user reading the instructions in a non intended way
			if (operation == "ADD" || operation == "+")
			{
				cout << "Result = " << firstNum + secondNum << endl;
			}
			else if (operation == "SUBTRACT" || operation == "-")
			{
				cout << "Result = " << firstNum - secondNum << endl;

			}
			else if (operation == "MULTIPLY" || operation == "*")
			{
				cout << "Result = " << firstNum * secondNum << endl;

			}
			else if (operation == "DIVIDE" || operation == "/")
			{
				if (secondNum != 0)
				{
					cout << "Result = " << firstNum / secondNum << endl;
				}
				else
				{
					cout << "Can't divide by 0!!" << endl;
				}
			}
			else
			{
				cout << "Pleae input a correct arithmetic operation!!" << endl;
			}
		}
		else
		{
			cout << "Please input numbers" << endl;
		}

		//Asks the user if they want to repeat the calculation loop
		//this ties with the main while loop
		cout << "If you want to continue please type \"yes\"" << endl;
		cin >> answer;
		cout << endl;
	}
}