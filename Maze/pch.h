#pragma once

#include <iostream>
#include <windows.h>
#include <vector>
#include "Type.h"
#include "ConsoleHelper.h"

using namespace std;

struct Pos
{
	bool operator == (Pos& other)
	{
		return y == other.y;
	}

	int32 y = 0;
	int32 x = 0;
};
