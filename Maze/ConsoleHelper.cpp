#include "ConsoleHelper.h"
#include "pch.h"

void ConsoleHelper::SetConsoleCursorPosition(int32 x, int32 y)
{
	HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { static_cast<short>(x),static_cast<short>(y) };
	::SetConsoleCursorPosition(output, pos);
}

void ConsoleHelper::SetCursorColor(ConsoleColor Color)
{
	HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
	::SetConsoleTextAttribute(output, static_cast<int16>(Color));
}

void ConsoleHelper::ShowConsoleCursor(bool flag)
{
	HANDLE output = ::GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorinfo;
	::GetConsoleCursorInfo(output, &cursorinfo);
	cursorinfo.bVisible = flag;
	::SetConsoleCursorInfo(output, &cursorinfo);
}
