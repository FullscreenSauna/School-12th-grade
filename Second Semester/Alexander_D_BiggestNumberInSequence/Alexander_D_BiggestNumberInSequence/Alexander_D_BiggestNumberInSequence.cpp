#include <iostream>
#include <list>
#include <string>

using namespace std;

bool isNumber(string number)
{
	bool isNumber = true;

	for (size_t i = 0; i < number.size(); i++)
	{
		if (!isdigit(number[i]) && number[0] != '-')
		{
			isNumber = false;
			break;
		}
	}

	return isNumber;
}

list<int> fillList()
{
	list<int> output;

	string input = "";

	while (input != "end")
	{
		cin >> input;

		if (input == "end")
		{
			break;
		}

		if (isNumber(input))
		{
			output.push_back(stoi(input));
		}
		else
		{
			cout << "We detected a non number input(" << input << "), so we skipped it!" << endl;
		}

	}

	return output;
}

int findBiggest(list<int> numbers)
{
	int max = INT_MIN;

	for (int num : numbers)
	{
		if (num > max)
		{
			max = num;
		}
	}

	// another way of iterating an array/list
	/*for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
	{
		if (*it > max)
		{
			max = *it;
		}
	}*/

	return max;
}

int main()
{
	cout << "Enter any amount of numbers, and then type \"end\" to proceed:" << endl;

	list<int> numbers = fillList();
	
	cout << endl;

	int biggest = findBiggest(numbers);
	
	cout << "The biggest number that you inputed is:" << endl;
	cout << biggest;
}
