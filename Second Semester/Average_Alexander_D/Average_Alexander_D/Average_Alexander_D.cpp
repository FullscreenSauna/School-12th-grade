#include <iostream>
#include <stdlib.h>     
#include <time.h>   

using namespace std;

double generateAverage(int n, int lowerLimit, int upperLimit) 
{
	//creating a "seed" for the random function based on current time
	srand(time(NULL));

	double sum = 0;

	for (int i = 0; i < n; i++)
	{
		//generating a random number using the random function
		double number = lowerLimit + (rand() % (upperLimit + 1));

		sum += number;
	}

	return sum / n;
}

int main()
{
	cout << "Enter the following parameters: " << endl;

	int n, lowwerLimit, upperLimit;

	cout << "Int n(the number of terms you want to calculate): ";
	cin >> n;

	cout << "The lowwer limit of the numbers: ";
	cin >> lowwerLimit;

	cout << "The upper limit of the numbers: ";
	cin >> upperLimit;

	cout << endl;

	cout << "The average is: "<< generateAverage(n, lowwerLimit, upperLimit);

}