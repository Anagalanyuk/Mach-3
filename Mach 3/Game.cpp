#include"Game.h"

#include"Border.h"

#include"PlayingField.h"

#include"Show.h"

#include"Cursor.h"

#include<conio.h>

#include"ConsoleKey.h"

void Game::Play()
{
	Border border;
	border.Show();

	PlayingField field;
	Cursor cursor;
	Show game;
	int key;
	field.SetCorsor(cursor.GetRows(), cursor.GetColumns(), true);

	while (true)
	{
		game.ShowGame(field);
		key = _getch();
		if (key == static_cast<int>(ConsoleKey::RightArrow))
		{
			field.SetCorsor(cursor.GetRows(), cursor.GetColumns(), false);
			cursor.AddRows();
			field.SetCorsor(cursor.GetRows(), cursor.GetColumns(), true);
		}
		else if (key == static_cast<int>(ConsoleKey::LeftArrow))
		{
			field.SetCorsor(cursor.GetRows(), cursor.GetColumns(), false);
			cursor.MinusRows();
			field.SetCorsor(cursor.GetRows(), cursor.GetColumns(), true);
		}
		else if (key == static_cast<int>(ConsoleKey::UpArrow))
		{
			field.SetCorsor(cursor.GetRows(), cursor.GetColumns(), false);
			cursor.MinusColumns();
			field.SetCorsor(cursor.GetRows(), cursor.GetColumns(), true);
		}
		else if (key == static_cast<int>(ConsoleKey::DownArrow))
		{
			field.SetCorsor(cursor.GetRows(), cursor.GetColumns(), false);
			cursor.AddColumns();
			field.SetCorsor(cursor.GetRows(), cursor.GetColumns(), true);
		}
	}

}