#include"Game.h"

#include"Border.h"

#include"PlayingField.h"

#include"Show.h"

#include"Cursor.h"

#include<conio.h>

#include"ConsoleKey.h"

#include"ControlKey.h"

void Game::Play()
{
	Border border;
	border.Show();

	PlayingField* field = new PlayingField();
	Cursor* cursor = new Cursor();
	Show game;
	ControlKey step(field, cursor);
	int key = 0;
	field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);

	while (key != static_cast<int>(ConsoleKey::Escape))
	{
		game.ShowGame(field);
		key = _getch();
		if (key == static_cast<int>(ConsoleKey::RightArrow))
		{
			step.StepRight();
		}
		else if (key == static_cast<int>(ConsoleKey::LeftArrow))
		{
			step.StepLeft();
		}
		else if (key == static_cast<int>(ConsoleKey::UpArrow))
		{
			step.StepUp();
		}
		else if (key == static_cast<int>(ConsoleKey::DownArrow))
		{
			step.StepDown();
		}
		else if (key == static_cast<int>(ConsoleKey::Space))
		{
			step.Take();
		}
	}

	delete field;
	delete cursor;
}