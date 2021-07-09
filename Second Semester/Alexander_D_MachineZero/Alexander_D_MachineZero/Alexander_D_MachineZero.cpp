#include <iostream>
using namespace std;

int main()
{
	double y;
	double x = 1;

	while (x > 0)
	{
		y = x;
		x /= 2;
	}

	cout << "y = " << y << endl;
	cout << "x = " << x;
}
