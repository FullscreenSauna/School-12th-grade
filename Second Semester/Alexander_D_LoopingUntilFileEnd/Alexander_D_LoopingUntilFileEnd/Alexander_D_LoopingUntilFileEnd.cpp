#include <iostream>

using namespace std;

int main()
{
	int num;

	int sum = 0;

	cin >> num;

	while (cin)
	{
		sum += num;
		cin >> num;
	}

	cout << "Sum = " << sum;
}
