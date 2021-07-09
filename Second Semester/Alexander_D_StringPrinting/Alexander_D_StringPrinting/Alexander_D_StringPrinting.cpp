#include <iostream>

using namespace std;

int main()
{
	string word = "ChushkaPiper";

	for (int i = 0; i < word.length(); i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << word[j];
		}
			cout << endl;
	}
}
