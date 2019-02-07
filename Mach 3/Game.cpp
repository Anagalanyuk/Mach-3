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

#include"ClearRepeatColor.h"

void Game::Play()
{
	int key = 0;
	Menu menu;
	Information info;
	while (key != 101)
	{
		if (key == 115)
		{
			break;
		}
		else if (key == 235)
		{
			break;
		}
		menu.MenuShow();
		key = _getch();
		if (key == 105 || key == 232)
		{
			while (key != 114)
			{
				system("CLS");
				info.InformationShow();
				key = _getch();
				if (key == 114)
				{
					system("CLS");
				}
				else if (key == 170)
				{
					system("CLS");
					break;
				}
			}
		}
	}
	system("CLS");
	if (key != 101 || key != 227)
	{
		Border border;
		border.Show();
		PlayingField* field = new PlayingField();
		Cursor* cursor = new Cursor();
		Show game;
		ControlKey step(field, cursor);
		Move move;
		ClearRepearColor repeat(field, cursor);
		field->SetCorsor(cursor->GetRows(), cursor->GetColumns(), true);
		//repeat.ClearRepeat();

		void(*print)(PlayingField* field);
		while (key != static_cast<int>(ConsoleKey::Escape))
		{
			repeat.ClearRepeat();
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