#include"Game.h"

#include"Border.h"

#include"PlayingField.h"

#include"Show.h"

#include"Cursor.h"

#include<conio.h>

void Game::Play()
{
	Border border;
	border.Show();

	PlayingField field;
	Cursor cursor;
	field.SetCorsor(cursor.GetRows(), cursor.GetColumns(), true);

	Show game;
	game.ShowGame(field);
}