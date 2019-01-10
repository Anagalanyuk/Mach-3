#pragma once

#include <Windows.h>

enum class ConsoleColor
{
    Black = 0,
    Blue = FOREGROUND_BLUE | FOREGROUND_INTENSITY,
    Cyan = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY,
    DarkBlue = FOREGROUND_BLUE,
    DarkCyan = FOREGROUND_BLUE | FOREGROUND_GREEN,
    DarkGray = FOREGROUND_INTENSITY,
    DarkGreen = FOREGROUND_GREEN,
    DarkMagenta = FOREGROUND_BLUE | FOREGROUND_RED,
    DarkRed = FOREGROUND_RED,
    DarkYellow = FOREGROUND_GREEN | FOREGROUND_RED,
    Gray = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED,
    Green = FOREGROUND_GREEN | FOREGROUND_INTENSITY,
    Magenta = FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY,
    Red = FOREGROUND_RED | FOREGROUND_INTENSITY,
    White = FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY,
    Yellow = FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY
};