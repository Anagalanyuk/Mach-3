#include"Console.h"

#include"ConsoleColor.h"

#include"Information.h"

void Information::InformationShow()
{
	Console::HideCursor();
	Console::SetCursorPosition(x, y );
	Console::Write("Information:", ConsoleColor::DarkMagenta);
	Console::SetCursorPosition(x, y + 2);
	Console::Write("Move left  - left arrow", ConsoleColor::DarkMagenta);
	Console::SetCursorPosition(x, y + 3);
	Console::Write("Move right - right arrow", ConsoleColor::DarkMagenta);
	Console::SetCursorPosition(x, y + 4);
	Console::Write("Move up    - up arrow", ConsoleColor::DarkMagenta);
	Console::SetCursorPosition(x, y + 5);
	Console::Write("Move down  - down arrow", ConsoleColor::DarkMagenta);
	Console::SetCursorPosition(x, y + 6);
	Console::Write("Take cell  - space", ConsoleColor::DarkMagenta);
	Console::SetCursorPosition(x, y + 7);
	Console::Write("Restart field - enter", ConsoleColor::DarkMagenta);
	Console::SetCursorPosition(x, y + 8);
	Console::Write("Exit          - esc", ConsoleColor::DarkMagenta);
	Console::SetCursorPosition(x, y + 10);
	Console::Write("press R to return menu", ConsoleColor::Cyan);
}