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
	Console::HideCursor();
	for (int i = 0; i < x; ++i)
	{
		Console::SetCursorPosition(i, 0);
		Console::Write(border, ConsoleColor::Yellow);
		Console::SetCursorPosition(i, y + offestY);
		Console::Write(border, ConsoleColor::Yellow);
	}

	for (int i = 0; i < y; ++i)
	{
		Console::SetCursorPosition(0, offestY + i);
		Console::Write(border, ConsoleColor::Yellow);
		Console::SetCursorPosition(x - offsetX, i + offestY);
		Console::Write(border, ConsoleColor::Yellow);
	}

	Console::SetCursorPosition(levelX, levelY);
	Console::Write("Level: ", ConsoleColor::Cyan);
	Console::SetCursorPosition(scoreX, scoreY);
	Console::Write("Score: ", ConsoleColor::Cyan);
}