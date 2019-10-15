#include "Game.h"
void Game::init(string *iD)
{
	gameOver = false;

	Enemy enemy1, enemy2, enemy3, enemy4;
	Player player;

	player.spawn(*iD, 170, 1, 0, 0);
	enemy1.spawn("Fickle", 170, 2, 1, 1);
	enemy2.spawn("Chaser", 170, 3, 2, 2);
	enemy3.spawn("Ambusher", 170, 4, 3, 3);
	enemy4.spawn("Not Smart", 170, 5, 4, 4);
	
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
	// put this on the main
	while (gameOver != true)
	{
		updateGrid();
		printGrid();
		render();
		update();
		clean();
		updateGrid();
		printGrid();
		battle();
		stats();
		clean();
	}
}
void Game::render()
{
	list<GameCharacter*>::const_iterator iter;

	for (iter = lsGameCharacters.begin(); iter != lsGameCharacters.end(); ++iter)
	{
		(*iter)->render();
	}
	cout << endl;
}
void Game::update()
{
	list<GameCharacter*>::const_iterator iter;

	for (iter = lsGameCharacters.begin(); iter != lsGameCharacters.end(); ++iter)
	{
		(*iter)->update();
	}
}
void Game::battle()
{

}
void Game::stats()
{
	list<GameCharacter*>::const_iterator iter;

	for (iter = lsGameCharacters.begin(); iter != lsGameCharacters.end(); ++iter)
	{
		(*iter)->stats();
	}
	cout << endl;
}
void Game::clean()
{
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
	list<GameCharacter*>::const_iterator iter;
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
			cout << grid[i][g] << " ";
		}
		cout << "\n";
	}
}

void Game::checkGameOver()
{
	if (lsGameCharacters.front()->isAlive() == false)
	{
		gameOver = true;
	}
}