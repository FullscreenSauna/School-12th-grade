#include <iostream>

using namespace std;

void PickRandomGame()
{
	int n = rand() % 4 + 1;

	switch (n)
	{
	case 1:
		cout << "Bloons TD6 is a tower defence game that can keep you occupied for hours" << endl;
		break;
	case 2:
		cout << "Noita is a rogue-like game where every pixel is affected by the one next to it" << endl;
		break;
	case 3:
		cout << "Shovel Knight is one of the best modern day 2D platformers" << endl;
		break;
	case 4:
		cout << "Skyrim, but with mods. It's actually good" << endl;
		break;
	}
}

int main()
{
	cout << "What type of game do you want to play?\n" << endl;
	cout << "1. Shooter" << endl;
	cout << "2. Rogue-lite/like" << endl;
	cout << "3. Strategy" << endl;
	cout << "4. Platformer" << endl;
	cout << "5. Survival" << endl;
	cout << "6. Surprise me!\n" << endl;

	int id;

	cin >> id;

	cout << "I recommend checking out:" << endl;

	switch (id)
	{
	case 1:
		cout << "Rainbow six siege a tactical multiplayer shooter or The Wolfenstein series a singleplayer chaotic shooter" << endl;
		break;
	case 2:
		cout << "Hades which was one of the best games of 2020 or Risk of Rain for a weirder experience" << endl;
		break;
	case 3:
		cout << "Civilization VI is a great entry point or the Anno series for more complicated systems" << endl;
		break;
	case 4:
		cout << "Super Meat Boy can give you a good challenge or A Story About My Uncle if you want more story than jumps" << endl;
		break;
	case 5:
		cout << "Valhelsia is the newest hot game alternatively for a more narative driven game Subnautica" << endl;
		break;
	case 6:
		PickRandomGame();
		break;
	default: cout << "Wrong input";
		break;
	}
}