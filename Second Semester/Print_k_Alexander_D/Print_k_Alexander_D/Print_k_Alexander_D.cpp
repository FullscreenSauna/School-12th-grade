#include <iostream>

using namespace std;

void print_1(int n)
{
	//for the first itteration of the two loops one '*' is printed
	//for every itteration after that an additional one is printed, until we reach the maximum(n)
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << '*';
		}

		cout << endl;
	}
}

void print_2(int n)
{
	//print the maximum(n) - i number of empty spaces
	//then fill with '*' until we reach the maximum(n)
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j >= n - i)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}
		}

		cout << endl;
	}
}

void print_3(int n)
{
	//for the first itteration of the two loops a maximum(n) number of '*' is printed
	//for every itteration after that one less is printed, until we reach 1 '*'
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << '*';
		}

		cout << endl;
	}
}

void print_4(int n)
{
	//for the first itteration of the two loops a maximum(n) number of '*' is printed
	//for every itteration after that one additional '*' is remplaced with an empty space
	//until we reach 1 '*'
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j > i - 1)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}
		}

		cout << endl;
	}
}

void printTriangles(int n)
{
	cout << "Triangle 1:" << endl;
	print_1(n);
	cout << endl;

	cout << "Triangle 2:" << endl;
	print_2(n);
	cout << endl;

	cout << "Triangle 3:" << endl;
	print_3(n);
	cout << endl;

	cout << "Triangle 4:" << endl;
	print_4(n);
	cout << endl;
}

int getInput()
{
	cout << "Enter n: ";
	int n;
	cin >> n;
	cout << endl;

	while (n < 1)
	{
		cout << "n must be bigger than 0 ";
		cout << endl;


		cout << "Enter n: ";
		cin >> n;
		cout << endl;
	}

	return n;
}

int main()
{
	int n = getInput();

	printTriangles(n);
}