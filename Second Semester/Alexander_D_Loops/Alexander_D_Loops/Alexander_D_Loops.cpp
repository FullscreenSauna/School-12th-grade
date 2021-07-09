#include <iostream>

using namespace std;

int main()
{
	cout << "zad1:" << endl;
	zad1();

	cout << endl; 
	cout << "zad2:" << endl;
	zad2();
}

void zad1()
{
	int n = 0;
	while (n < 3)
	{
		cout << "Hello"; n = n + 1;
	}
}


void zad2()
{
	int p = 25;
	while (p > 0)
	{
		cout << " " << p; 
		p = p - 5;
	}
}
