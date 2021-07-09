#include <iostream>

using namespace std;

void zodiac(int day, int month)
{
	switch (month)
	{
	case 1:
		if (day > 0 && day < 22)
		{
			cout << "You are a Capricorn" << endl;
		}
		else if (day < 32)
		{
			cout << "You are an Aquarius" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	case 2:
		if (day > 0 && day < 21)
		{
			cout << "You are an Aqarius" << endl;
		}
		else if (day < 30)
		{
			cout << "You are a Pisces" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	case 3:
		if (day > 0 && day < 20)
		{
			cout << "You are a Pisces" << endl;
		}
		else if (day < 32)
		{
			cout << "You are an Aries" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	case 4:
		if (day > 0 && day < 21)
		{
			cout << "You are an Aries" << endl;
		}
		else if (day < 31)
		{
			cout << "You are a Taurus" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	case 5:
		if (day > 0 && day < 22)
		{
			cout << "You are a Taurus" << endl;
		}
		else if (day < 31)
		{
			cout << "You are a Gemini" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	case 6:
		if (day > 0 && day < 23)
		{
			cout << "You are a Gemini" << endl;
		}
		else if (day < 31)
		{
			cout << "You are a Cancer" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	case 7:
		if (day > 0 && day < 23)
		{
			cout << "You are a Cancer" << endl;
		}
		else if (day < 32)
		{
			cout << "You are a Leo" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	case 8:
		if (day > 0 && day < 23)
		{
			cout << "You are a Leo" << endl;
		}
		else if (day < 32)
		{
			cout << "You are a Virgo" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	case 9:
		if (day > 0 && day < 23)
		{
			cout << "You are a Virgo" << endl;
		}
		else if (day < 31)
		{
			cout << "You are a Libra" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	case 10:
		if (day > 0 && day < 23)
		{
			cout << "You are a Libra" << endl;
		}
		else if (day < 32)
		{
			cout << "You are a Scorpio" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	case 11:
		if (day > 0 && day < 23)
		{
			cout << "You are a Scorpio" << endl;
		}
		else if (day < 31)
		{
			cout << "You are a Sagittarius" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	case 12:
		if (day > 0 && day < 23)
		{
			cout << "You are a Sagittarius" << endl;
		}
		else if (day < 31)
		{
			cout << "You are a Capricorn" << endl;
		}
		else
		{
			cout << "Incorrect day" << endl;
		}
		break;
	default:
		cout << "Incorrect month" << endl;
		break;
	}

}

int main()
{
	cout << "Enter the day and month:" << endl;

	int day, month;

	cin >> day >> month;

	zodiac(day, month);
}
