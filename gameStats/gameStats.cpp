//Game stats program
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	short lives, aliensKilled;				// declare multiple variables in same bit

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;

	double engineTemp = 6572.89;

	cout << "\nscore: "		<< score << endl;
	cout << "distance: "	<< distance << endl;
	cout << "playAgain: "	<< playAgain << endl;
											//skipping shieldsUp because you dont usually print bools
	cout << "lives: "		<< lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;

	int fuel;
	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;
											//signed = positive or negative, unsigned = positive only. only change range. signed default.
	typedef unsigned short int ushort;		//this creates a variable type ushort which is a shortening of unsigned short int
	ushort bonus = 10;						// ushort = see above
	cout << "\nbonus: " << bonus << endl;

	return 0;
}

