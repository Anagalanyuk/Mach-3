#pragma once

#include <Windows.h>

#include "ConsoleColor.h"
#include "ConsoleKey.h"

class Console
{
public:
    static void HideCursor();
    static ConsoleKey ReadKey();
    static void SetCursorPosition(const unsigned int x, const unsigned int y);
    static void Write(const char character);
    static void Write(const char character, const ConsoleColor foreground);
    static void Write(const char character, const ConsoleColor foreground, const ConsoleColor background);
    static void Write(const char* const string);
    static void Write(const char* const string, const ConsoleColor foreground);
    static void Write(const char* const string, const ConsoleColor foreground, const ConsoleColor background);
private:
    static const HANDLE consoleOutputHandle;
    static const ConsoleColor defaultBackgroundColor = ConsoleColor::Black;
    static const ConsoleColor defaultForegroundColor = ConsoleColor::Gray;
};