#pragma once

#include <windows.h>
#include "Type.h"

enum class ConsoleColor
{
	Black = 0,
	RED = FOREGROUND_RED,
	Green = FOREGROUND_GREEN,
	BLUE = FOREGROUND_BLUE,
	YELLOW = RED | Green,
	WHITE = RED | Green | BLUE,

};

class ConsoleHelper
{
public:
	static void SetConsoleCursorPosition(int32 x, int32 y);
	static void SetCursorColor(ConsoleColor Color);
	static void ShowConsoleCursor(bool flag);
};
