#include"Console.h"

#include"ConsoleColor.h"

#include"Menu.h"

void Menu::MenuShow()
{
	Console::SetCursorPosition(x, y);
	Console::Write("S - Start", ConsoleColor::Cyan);
	Console::SetCursorPosition(infoX, infoY);
	Console::Write("I - Info", ConsoleColor::Cyan);
	Console::SetCursorPosition(exitX, exitY);
	Console::Write("E - Exit", ConsoleColor::Cyan);
	Console::HideCursor();
}