#include"Game.h"

#include"Border.h"

#include"PlayingField.h"

#include"Show.h"
 
void Game::Play()
{
	Border border;
	border.Show();

	PlayingField field;
	Show game;
	game.ShowGame(field);
}