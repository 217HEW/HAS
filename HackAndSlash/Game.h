#ifndef __GAME_H__
#define __GAME_H__

//�Q�[���Ƃ����I�u�W�F�N�g�́A�����̃V�[���i�^�C�g���A�Z���N�g�j������
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