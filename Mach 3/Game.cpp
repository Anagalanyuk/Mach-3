#include<conio.h>

#include<Windows.h>

#include"Game.h"

#include"Border.h"

#include"PlayingField.h"

#include"Show.h"

#include"Cursor.h"

#include"ConsoleKey.h"

#include"ControlKey.h"

#include"Move.h"

void Game::Play()
{
	Border border;
	border.Show();

	PlayingField* field = new PlayingField();
	Cursor* cursor = new Cursor();
	Show game;
	ControlKey step(field, cursor);
	Move move;
	int key = 0;
	field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);

	while (key != static_cast<int>(ConsoleKey::Escape))
	{
		game.ShowGame(field);
		key = _getch();
		if (key == static_cast<int>(ConsoleKey::RightArrow))
		{
			step.StepRight();
			game.ShowGame(field);
			if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
				!move.IsMove(field, cursor))
			{
				Sleep(400);
				step.StepLeft();
				step.Take();
				game.ShowGame(field);
			}
		}
		else if (key == static_cast<int>(ConsoleKey::LeftArrow))
		{
			step.StepLeft();
			game.ShowGame(field);
			if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
				!move.IsMove(field, cursor))
			{
				Sleep(400);
				step.StepRight();
				step.Take();
				game.ShowGame(field);
			}
		}
		else if (key == static_cast<int>(ConsoleKey::UpArrow))
		{
			step.StepUp();
			game.ShowGame(field);
			if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
				!move.IsMove(field, cursor))
			{
				Sleep(400);
				step.StepDown();
				step.Take();
				game.ShowGame(field);
			}
		}
		else if (key == static_cast<int>(ConsoleKey::DownArrow))
		{
			step.StepDown();
			game.ShowGame(field);
			if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
				!move.IsMove(field, cursor))
			{
				Sleep(400);
				step.StepUp();
				step.Take();
				game.ShowGame(field);
			}
		}
		else if (key == static_cast<int>(ConsoleKey::Space))
		{
			step.Take();
		}
		else if (key == static_cast<int>(ConsoleKey::Enter))
		{
			field->ReStart();
		}

	}
	delete field;
	delete cursor;
}