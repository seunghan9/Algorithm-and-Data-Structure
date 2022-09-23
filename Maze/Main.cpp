#include <iostream>
#include "pch.h"
#include "ConsoleHelper.h"
#include "Board.h"

Board board;

int main()
{
	board.Init(25);
	board.GenerateMap();
	
	uint64 lastTick = 0;
	while (true)
	{

#pragma region 프레임 관리
		const uint64 currentTick = GetTickCount64();
		const uint64 deltaTick = currentTick - lastTick;
		// if(deltaTick) 프레임 고정 관리
		lastTick = currentTick;
#pragma endregion

		// 입력

		// 로직

		// 렌더링
		board.Render();
	}

	return 0;
}
