#include<iostream>

#include<conio.h>

#include"Border.h"

#include"Console.h"

#include"ConsoleColor.h"

char Border::GetBorder() { return border; }

int Border::GetX() { return x; }

int Border::GetY() { return y; }

void Border::Show()
{
	Console borderShow;
	borderShow.HideCursor();
	for (int i = 0; i < x; ++i)
	{
		borderShow.SetCursorPosition(i, 0);
		borderShow.Write(border, ConsoleColor::Yellow);
		borderShow.SetCursorPosition(i, y + offestY);
		borderShow.Write(border, ConsoleColor::Yellow);
	}

	for (int i = 0; i < y; ++i)
	{
		borderShow.SetCursorPosition(0, offestY + i);
		borderShow.Write(border, ConsoleColor::Yellow);
		borderShow.SetCursorPosition(x - offsetX, i + offestY);
		borderShow.Write(border, ConsoleColor::Yellow);
	}

	borderShow.SetCursorPosition(levelX, levelY);
	borderShow.Write("Level: ", ConsoleColor::Cyan);
	borderShow.SetCursorPosition(scoreX, scoreY);
	borderShow.Write("Score: ", ConsoleColor::Cyan);
	std::cout << std::endl;
}