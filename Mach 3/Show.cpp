#include<iostream>

#include"Show.h"

#include"Console.h"

#include"ConsoleColor.h"

#include"PlayingField.h"

#include<conio.h>

#include"Cursor.h"


void Show::ShowGame(PlayingField* field)
{
	Console show;
	for (int i = 0; i < field->GetRows(); ++i)
	{
		for (int j = 0; j < field->GetColumns(); ++j)
		{
			show.SetCursorPosition(x + i, y + j);
			if (field->GetColor(i, j) == 1)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						show.Write(cell, ConsoleColor::Blue, ConsoleColor::DarkGray);
					}
					else
					{
						show.Write(cell, ConsoleColor::Blue, ConsoleColor::Gray);
					}
				}
				else
				{
					show.Write(cell, ConsoleColor::Blue);
				}
			}
			else if (field->GetColor(i, j) == 2)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						show.Write(cell, ConsoleColor::Green, ConsoleColor::DarkGray);
					}
					else
					{
						show.Write(cell, ConsoleColor::Green, ConsoleColor::Gray);
					}
				}
				else
				{
					show.Write(cell, ConsoleColor::Green);
				}
			}
			else if (field->GetColor(i, j) == 3)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						show.Write(cell, ConsoleColor::Red, ConsoleColor::DarkGray);
					}
					else
					{
						show.Write(cell, ConsoleColor::Red, ConsoleColor::Gray);
					}
				}
				else
				{
					show.Write(cell, ConsoleColor::Red);
				}
			}
			else if (field->GetColor(i, j) == 4)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						show.Write(cell, ConsoleColor::Magenta, ConsoleColor::DarkGray);
					}
					else
					{
						show.Write(cell, ConsoleColor::Magenta, ConsoleColor::Gray);
					}
				}
				else
				{
					show.Write(cell, ConsoleColor::Magenta);
				}
			}
			else if (field->GetColor(i, j) == 5)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						show.Write(cell, ConsoleColor::DarkYellow, ConsoleColor::DarkGray);;
					}
					else
					{
						show.Write(cell, ConsoleColor::DarkYellow, ConsoleColor::Gray);
					}
				}
				else
				{
					show.Write(cell, ConsoleColor::DarkYellow);
				}
			}
			else if (field->GetColor(i, j) == 6)
			{
				if (field->GetIsCursor(i, j))
				{
					if (field->IsTake(i, j))
					{
						show.Write(cell, ConsoleColor::White, ConsoleColor::DarkGray);
					}
					else
					{
						show.Write(cell, ConsoleColor::White, ConsoleColor::Gray);
					}
				}
				else
				{
					show.Write(cell, ConsoleColor::White);
				}
			}
			else if (field->GetColor(i, j) == 0)
			{
				show.Write(' ');
			}
		}
	}
	char scorecharacter[10];
	char levelcharacter[10];
	sprintf_s(scorecharacter, "%d", field->GetScore());
	sprintf_s(levelcharacter, "%d", field->GetLevel());
	show.SetCursorPosition(scoreX, scoreY);
	show.Write(scorecharacter, ConsoleColor::Cyan);
	show.SetCursorPosition(levelX, levelY);
	show.Write(levelcharacter, ConsoleColor::Cyan);
}