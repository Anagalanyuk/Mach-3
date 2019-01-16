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
		borderShow.SetCursorPosition(0 + i, 0);
		borderShow.Write(border, ConsoleColor::Yellow);
		borderShow.SetCursorPosition(0 + i, y + 1);
		borderShow.Write(border, ConsoleColor::Yellow);
	}

	for (int i = 0; i < y; ++i)
	{
		borderShow.SetCursorPosition(0, 1 + i);
		borderShow.Write(border, ConsoleColor::Yellow);
		borderShow.SetCursorPosition(x - 1, i + 1);
		borderShow.Write(border, ConsoleColor::Yellow);
	}

	borderShow.SetCursorPosition(y + 3, 1);
	borderShow.Write("Level: 1", ConsoleColor::Cyan);
	borderShow.SetCursorPosition(y + 3, 3);
	borderShow.Write("Score: 100", ConsoleColor::Cyan);
	borderShow.SetCursorPosition(0, y + 1);
	std::cout << std::endl;
}