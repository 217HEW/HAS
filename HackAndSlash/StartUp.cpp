#include  <stdio.h>
#include "Game.h"
#include <Windows.h>

#pragma comment(lib,"winmm.lib")

int main(void)
{
	GameApp *pGame = new GameApp();

	timeBeginPeriod(1);	//分解能

	DWORD nowTime = 0;
	DWORD oldTime = 0;

	while(!GetAsyncKeyState(VK_ESCAPE))
	{
	//fpsの制御
		nowTime = timeGetTime();
		if (nowTime > oldTime + 1000 / 60)
		{
			pGame->Update();
			pGame->Draw();
			oldTime = nowTime;
		}

	}
	timeEndPeriod(1);
	delete pGame;

	//rewind(stdin);
	//getchar();

	return 0;
}