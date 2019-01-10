#include "Console.h"

#include <conio.h>
#include <iostream>

using namespace std;

const HANDLE Console::consoleOutputHandle = GetStdHandle(STD_OUTPUT_HANDLE);

void Console::HideCursor()
{
    CONSOLE_CURSOR_INFO cursorInfo = {};
    cursorInfo.bVisible = FALSE;
    cursorInfo.dwSize = 100;

    SetConsoleCursorInfo(consoleOutputHandle, &cursorInfo);
}

ConsoleKey Console::ReadKey()
{
    int key = _getch();
    if (key == 224)
    {
        key = _getch();
    }

    return (ConsoleKey)key;
}

void Console::SetCursorPosition(const unsigned int x, const unsigned int y)
{
    SetConsoleCursorPosition(consoleOutputHandle, { (SHORT)x, (SHORT)y });
}

void Console::Write(const char character)
{
    Write(character, defaultForegroundColor, defaultBackgroundColor);
}

void Console::Write(const char character, const ConsoleColor foreground)
{
    Write(character, foreground, defaultBackgroundColor);
}

void Console::Write(const char character, const ConsoleColor foreground, const ConsoleColor background)
{
    const WORD attributes = ((int)background << 4) | (int)foreground;

    SetConsoleTextAttribute(consoleOutputHandle, attributes);

    cout << character;
}

void Console::Write(const char* const string)
{
    Write(string, defaultForegroundColor, defaultBackgroundColor);
}

void Console::Write(const char* const string, const ConsoleColor foreground)
{
    Write(string, foreground, defaultBackgroundColor);
}

void Console::Write(const char* const string, const ConsoleColor foreground, const ConsoleColor background)
{
    const unsigned int length = strlen(string);
    for (unsigned int characterIndex = 0; characterIndex < length; ++characterIndex)
    {
        Write(string[characterIndex], foreground, background);
    }
}