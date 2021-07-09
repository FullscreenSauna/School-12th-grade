#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double goldenRatio = (1.0 + sqrtf(5.0)) / 2.0;

	cout << "Golden Ratio: " << goldenRatio << endl;

	double phi1_1 = sqrt(1.0 + sqrt(1.0));
	double phi1_2 = sqrt(1.0 + phi1_1);
	double phi1_3 = sqrt(1.0 + phi1_2);
	double phi1_4 = sqrt(1.0 + phi1_3);

	cout << "PHI1: " << phi1_1 << endl;
	cout << "PHI2: " << phi1_2 << endl;
	cout << "PHI3: " << phi1_3 << endl;
	cout << "PHI4: " << phi1_4 << endl;
}
