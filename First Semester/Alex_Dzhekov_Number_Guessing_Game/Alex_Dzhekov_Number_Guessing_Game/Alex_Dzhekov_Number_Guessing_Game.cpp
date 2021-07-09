#include <iostream>
using namespace std;


void guessing(int n) {

	while (true)
	{
		int guess;
		cin >> guess;

		if (guess == n)
		{
			cout << "Correct!!! :DDD" << endl;
			break;
		}
		else
		{
			cout << "Incorrect!!! DDDD:" << endl;
			cout << "Guess again" << endl;
		}
	}

}

int main()
{
	cout << "What is your number?" << endl;

	int n;
	cin >> n;
	
	n = (((n * 4) + 6) / 2);

	cout << "Now guess the resulting number" << endl;

	guessing(n);
}
