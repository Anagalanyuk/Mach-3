#include<iostream>

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

#include"Menu.h"

#include"Information.h"

void Game::Play()
{
	int key = 0;
	Menu menu;
	Information info;
	while ( key != 101)
	{
		if (key == 115)
		{
			break;
		}
		menu.MenuShow();
		key = _getch();
		while (key == 105 && key != 114)
		{
			system("CLS");
			info.InformationShow();
			key = _getch();
			if (key == 114)
			{
				system("CLS");
			}
		}
	}
	system("CLS");
	if (key != 101)
	{
		Border border;
		border.Show();
		PlayingField* field = new PlayingField();
		Cursor* cursor = new Cursor();
		Show game;
		ControlKey step(field, cursor);
		Move move;
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);

		while (key != static_cast<int>(ConsoleKey::Escape))
		{
			game.ShowGame(field);
			key = _getch();
			if (key == static_cast<int>(ConsoleKey::RightArrow))
			{
				if (cursor->GetRows() < cursor->GetMaxRows())
				{
					step.StepRight();
					game.ShowGame(field);
					if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
						!move.IsMove(field, cursor))
					{
						Sleep(400);
						step.StepLeft();
						step.Take();
					}

				}
			}
			else if (key == static_cast<int>(ConsoleKey::LeftArrow))
			{
				if (cursor->GetRows() > cursor->GetMinRows())
				{
					step.StepLeft();
					game.ShowGame(field);
					if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
						!move.IsMove(field, cursor))
					{
						Sleep(400);
						step.StepRight();
						step.Take();
					}
				}
			}
			else if (key == static_cast<int>(ConsoleKey::UpArrow))
			{
				if (cursor->GetColumns() > cursor->GetMincolumns())
				{
					step.StepUp();
					game.ShowGame(field);
					if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
						!move.IsMove(field, cursor))
					{
						Sleep(400);
						step.StepDown();
						step.Take();
					}
				}
			}
			else if (key == static_cast<int>(ConsoleKey::DownArrow))
			{
				if (cursor->GetColumns() < cursor->GetMaxColumns())
				{
					step.StepDown();
					game.ShowGame(field);
					if (field->IsTake(cursor->GetRows(), cursor->GetColumns()) &&
						!move.IsMove(field, cursor))
					{
						Sleep(400);
						step.StepUp();
						step.Take();
					}
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
}