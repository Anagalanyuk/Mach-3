#include<iostream>

#include"Show.h"

#include"Console.h"

#include"ConsoleColor.h"

#include"PlayingField.h"

#include<conio.h>


void Show::ShowGame(PlayingField& field)
{
	Console show;
	for (int i = 0; i < field.GetRows(); ++i)
	{
		for (int j = 0; j < field.GetColumns(); ++j)
		{
			show.SetCursorPosition(1 + i, 1 + j);
			if (field.GetColor(i, j) == 1)
			{
				show.Write(cell, ConsoleColor::Blue);
			}
			else if (field.GetColor(i , j) == 2)
			{
				show.Write(cell, ConsoleColor::Green);
			}
			else if (field.GetColor(i, j) == 3)
			{
				show.Write(cell, ConsoleColor::Red);
			}
		}
	}
	_getch();
}