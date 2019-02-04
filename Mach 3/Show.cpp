#include<iostream>

#include"Show.h"

#include"Console.h"

#include"ConsoleColor.h"

#include"PlayingField.h"

#include<conio.h>

#include"Cursor.h"


void Show::ShowGame(PlayingField* field)
{
	for (int i = 0; i < field->GetRows(); ++i)
	{
		for (int j = 0; j < field->GetColumns(); ++j)
		{
			Console::SetCursorPosition(x + i, y + j);
			if (field->GetColor(i, j) == 1)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						Console::Write(cell, ConsoleColor::Blue, ConsoleColor::DarkGray);
					}
					else
					{
						Console::Write(cell, ConsoleColor::Blue, ConsoleColor::Gray);
					}
				}
				else
				{
					Console::Write(cell, ConsoleColor::Blue);
				}
			}
			else if (field->GetColor(i, j) == 2)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						Console::Write(cell, ConsoleColor::Green, ConsoleColor::DarkGray);
					}
					else
					{
						Console::Write(cell, ConsoleColor::Green, ConsoleColor::Gray);
					}
				}
				else
				{
					Console::Write(cell, ConsoleColor::Green);
				}
			}
			else if (field->GetColor(i, j) == 3)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						Console::Write(cell, ConsoleColor::Red, ConsoleColor::DarkGray);
					}
					else
					{
					Console::Write(cell, ConsoleColor::Red, ConsoleColor::Gray);
					}
				}
				else
				{
					Console::Write(cell, ConsoleColor::Red);
				}
			}
			else if (field->GetColor(i, j) == 4)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						Console::Write(cell, ConsoleColor::Magenta, ConsoleColor::DarkGray);
					}
					else
					{
						Console::Write(cell, ConsoleColor::Magenta, ConsoleColor::Gray);
					}
				}
				else
				{
					Console::Write(cell, ConsoleColor::Magenta);
				}
			}
			else if (field->GetColor(i, j) == 5)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						Console::Write(cell, ConsoleColor::DarkYellow, ConsoleColor::DarkGray);;
					}
					else
					{
						Console::Write(cell, ConsoleColor::DarkYellow, ConsoleColor::Gray);
					}
				}
				else
				{
					Console::Write(cell, ConsoleColor::DarkYellow);
				}
			}
			else if (field->GetColor(i, j) == 6)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						Console::Write(cell, ConsoleColor::White, ConsoleColor::DarkGray);
					}
					else
					{
						Console::Write(cell, ConsoleColor::White, ConsoleColor::Gray);
					}
				}
				else
				{
					Console::Write(cell, ConsoleColor::White);
				}
			}
			else if (field->GetColor(i, j) == 0)
			{
				Console::Write(' ');
			}
		}
	}
	char scorecharacter[10];
	char levelcharacter[10];
	sprintf_s(scorecharacter, "%d", field->GetScore());
	sprintf_s(levelcharacter, "%d", field->GetLevel());
	Console::SetCursorPosition(scoreX, scoreY);
	Console::Write(scorecharacter, ConsoleColor::Cyan);
	Console::SetCursorPosition(levelX, levelY);
	Console::Write(levelcharacter, ConsoleColor::Cyan);
}