#include "Game.h"
int main()
{
	bool endGame = false;

	enum options {START =1,RULES,EXIT};
	string playerID;
	int choice;
	srand(time(NULL));
	Game oGame;
	while (endGame == false)
	{
		
		cout << "Welcome to the Game, please enter an option" << endl;
		cout << "START = 1, RULES =2, EXIT =3"<< endl;
		cin >> choice;
		while (!cin.good())
		{
			cout << "You made an illegal choice." << endl;
			cout << "START = 1, RULES =2, EXIT =3" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			choice = 0;
			cin >> choice;
			system("CLS");
		}
		switch (choice)
		{
		case START:
			system("CLS");
			cout << "Please enter your ID: " << endl;
			cin >> playerID;
			cout << "Thank you" << endl;
			system("PAUSE");
			system("CLS");
			oGame.init(&playerID);
			break;
		case RULES:
			system("CLS");
			cout << "Each player will spawn either as a ROCK, PAPER or SCISSORS" << endl;
			cout << "Using your arrowkeys, move around to defeat the enemies by moving on top of them with the right combination" << endl;
			cout << "Be carefull!! The enemy can change forms too!!" << endl;
			cout << "If 2 players have the same type, then the tiebraker will be whoever has the most health" << endl;
			cout << "ROCK beats SCISSORS // SCISSORS beats PAPER // PAPER beats ROCK" << endl;
			system("PAUSE");
			break;
		case EXIT:
			system("CLS");
			cout << "Thanks for playing" << endl;
			system("PAUSE");
			endGame = true;
			break;
		default:

			break;
		}
		system("CLS");
	}

	return 0;
}