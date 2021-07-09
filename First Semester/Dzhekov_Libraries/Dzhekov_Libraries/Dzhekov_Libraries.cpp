#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	cout << abs(-1115) << endl;
	cout << min(155, 131) << endl;
	cout << sin((11 / 2) / 3) << endl;
	cout << sqrt(56) << endl;
	cout << sqrt(sqrt(81)) << endl;

	cout << cos((22 / 7) * (2 ^ (1 / 2))) << endl;
	cout << max(max(-2, -3), max(4, -32)) << endl;

	int numbers[] = {15, 47, 2, 58};
	cout << *max_element(begin(numbers), end(numbers));
}

