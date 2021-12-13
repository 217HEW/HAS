//ƒRƒƒ“ƒg
#include "Game.h"
#include "SampleScene.h"

GameApp::GameApp()
	:m_pScene(nullptr)
{
	m_pScene = new SampleScene();

}
GameApp::~GameApp()
{
	if (m_pScene != nullptr)
	{
		delete m_pScene;
		m_pScene = nullptr;
	}
}
void GameApp::Update()
{
	m_pScene->Update();
}
void GameApp::Draw()
{
	m_pScene->Draw();

}