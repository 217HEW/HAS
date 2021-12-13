#ifndef __SCENE_BASE_H__
#define __SCENE_BASE_H__

class SceneBase
{
public:
	SceneBase();
	~SceneBase();
	virtual void Update();
	virtual void Draw();

};


//SceneBase* pScene = new SceneScene;
//pScene->Update();

#endif // !__SCENE_BASE_H__

