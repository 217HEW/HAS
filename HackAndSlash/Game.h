#ifndef __GAME_H__
#define __GAME_H__

//ゲームというオブジェクトは、複数のシーン（タイトル、セレクト）を持つ
#include "SceneBase.h"

class GameApp
{
public:
	GameApp();
	~GameApp();

	void Update();
	void Draw();
private:
	SceneBase *m_pScene;
};

#endif