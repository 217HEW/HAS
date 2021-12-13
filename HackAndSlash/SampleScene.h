#ifndef __SAMPLE_SCENE_H__
#define __SAMPLE_SCENE_H__

#include "SceneBase.h"
#include "Player.h"
#include "ItemShop.h"

class SampleScene : public SceneBase
{
public:
	SampleScene();
	~SampleScene();
	void Update();
	void Draw();

private:
	Player *m_pPlayer;
	ItemShop *m_pShop;
};


#endif // !__SCENE_BASE_H__

