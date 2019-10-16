#include "Game.h"
void Game::init(string *iD)
{
	gameOver = false;

	Enemy enemy1, enemy2, enemy3, enemy4;
	Player player;

	player.spawn(*iD, 180, 1, 0, 0);
	enemy1.spawn("Fickle", 170, 2, 1, 1);
	enemy2.spawn("Chaser", 170, 3, 2, 2);
	enemy3.spawn("Ambusher", 170, 4, 3, 3);
	enemy4.spawn("Not Smart", 170, 5, 11, 11);

	Player* pPlayer = &player;
	Enemy* pEnemy1 = &enemy1;
	Enemy* pEnemy2 = &enemy2;
	Enemy* pEnemy3 = &enemy3;
	Enemy* pEnemy4 = &enemy4;

	lsGameCharacters.push_back(pPlayer);
	lsGameCharacters.push_back(pEnemy1);
	lsGameCharacters.push_back(pEnemy2);
	lsGameCharacters.push_back(pEnemy3);
	lsGameCharacters.push_back(pEnemy4);

	updateGrid();
	gameLoop();

}
void Game::gameLoop()
{
	while (gameOver != true)
	{
		cout << "---------------------------------------------------------" << endl;
		cout << "PLAYER//X: COORDINATE//Y: COORDINATE//HEALTH//SPEED//TYPE" << endl;
		cout << "---------------------------------------------------------" << endl;
		render();
		cout << "---------------------------------------------------------" << endl;
		updateGrid();
		printGrid();
		update();
		battle();
		clean();
		checkGameOver();
	}
	lsGameCharacters.clear();
}
void Game::render()
{
	for (iter = lsGameCharacters.begin(); iter != lsGameCharacters.end(); ++iter)
	{
		(*iter)->render();
	}
	cout << endl;
}
void Game::update()
{
	for (iter = lsGameCharacters.begin(); iter != lsGameCharacters.end(); ++iter)
	{
		(*iter)->chase(lsGameCharacters.front()->get_xValue(), lsGameCharacters.front()->get_yValue());
		(*iter)->update();
	}
}
void Game::battle()
{
	list<GameCharacter*>::const_iterator battleIter;
	for (iter = lsGameCharacters.begin(); iter != lsGameCharacters.end(); ++iter)
	{
		for (battleIter = lsGameCharacters.begin(); battleIter != lsGameCharacters.end(); ++battleIter)
		{
			if ((iter != battleIter) && (*iter)->get_xValue()==(*battleIter)->get_xValue()&& (*iter)->get_yValue() == (*battleIter)->get_yValue())
			{
				if ((*iter)->get_Type() != (*battleIter)->get_Type())
				{
					if (typeMatch((*iter)->get_Type(), (*battleIter)->get_Type()) == true)
					{
						(*battleIter)->setDamage();
					}
				}
				else
				{
					if ((*iter)->get_mHealth() >= (*battleIter)->get_mHealth())
					{
						(*battleIter)->setDamage();
					}
				}
			}
		}
	}
}
void Game::clean()
{
	list<GameCharacter*> holdList;
	for (iter = lsGameCharacters.begin(); iter != lsGameCharacters.end(); ++iter)
	{
		if ((*iter)->isAlive() == true)
		{
			holdList.push_back((*iter));
		}		
	}
	lsGameCharacters.clear();
	for (iter = holdList.begin(); iter != holdList.end(); ++iter)
	{
		lsGameCharacters.push_back((*iter));
	}
	holdList.clear();
	system("CLS");
}
void Game::updateGrid()
{
	for (int i = 0; i < 12; i++)
	{
		for (int g = 0; g < 12; g++)
		{
			grid[i][g] = '-';
		}
	}

	for (iter = lsGameCharacters.begin(); iter != lsGameCharacters.end(); ++iter)
	{
		grid[(*iter)->get_yValue()][(*iter)->get_xValue()] = (*iter)->get_firstCharacter();
	}
}
void Game::printGrid()
{
	for (int i = 0; i < 12; i++)
	{
		for (int g = 0; g < 12; g++)
		{
			cout << grid[i][g] << "    ";
		}
		cout << "\n";
	}
}

void Game::checkGameOver()
{

	if (lsGameCharacters.size() == 1)
	{
		cout << "Congratulations!!!!" << lsGameCharacters.front()->get_name() <<" Won!!!!!" << endl;
		system("PAUSE");
		gameOver = true;
	}
}

bool Game::typeMatch(int attacker, int defender)
{
	if (attacker == 0 && defender==1)
	{
		return false;
	}
	else if (attacker == 0 && defender == 2)
	{
		return true;
	}
	else if (attacker == 1 && defender == 0)
	{
		return true;
	}
	else if (attacker == 1 && defender == 2)
	{
		return false;
	}
	else if (attacker == 2 && defender == 0)
	{
		return false;
	}
	else if (attacker == 2 && defender == 1)
	{
		return true;
	}
}