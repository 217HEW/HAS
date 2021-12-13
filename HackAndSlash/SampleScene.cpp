#include "SampleScene.h"
#include "EnemyBase.h"
#include "ItemShop.h"
#include <stdio.h>
#include <string.h>


SampleScene::SampleScene()
	:m_pPlayer(nullptr)
	,m_pShop(nullptr)
{
	m_pPlayer = new Player;
	m_pShop = new ItemShop;
	m_pShop->Entry(m_pPlayer);
}
SampleScene::~SampleScene()
{
	if (m_pPlayer != nullptr)
	{
		delete m_pPlayer;
		m_pPlayer = nullptr;
	}
	if (m_pShop != nullptr)
	{
		delete m_pShop;
		m_pShop = nullptr;
	}

}
void SampleScene::Update()
{
	ItemBase* pItem = nullptr;
	EnemyBase* pEnemy = nullptr;

#if 0
	//“G‚ªo‚Ä‚­‚é
	pEnemy = new EnemyBase;
	//‡@“G‚Ì–¼Ì‚ð•\Ž¦iZZ‚ªŒ»‚ê‚½
	printf("%s‚ªŒ»‚ê‚½\n", pEnemy->GetName().c_str());

	//í“¬
	//	> Š„ˆ¤
	printf("“G‚ð“|‚µ‚½\n");

	//ƒAƒCƒeƒ€ƒhƒƒbƒv
	pItem = pEnemy->Drop();
	//‡AE‚Á‚½ƒAƒCƒeƒ€‚Ì–¼Ì‚ð•\Ž¦iZZ‚ðE‚Á‚½
	printf("%s‚ðE‚Á‚½\n", pItem->GetName().c_str());

	//ƒAƒCƒeƒ€ƒ|[ƒ`‚É’Ç‰Á
	if (pItem != nullptr)
	{
		if (!m_pPlayer->AddPouch(pItem))
		{
			//Žæ“¾‚Å‚«‚È‚¢ƒAƒCƒeƒ€‚Ííœ
			delete pItem;
			printf("Ž‚¿•¨‚ª‚¢‚Á‚Ï‚¢‚Å‚·\n");
		}
	}

	rewind(stdin);
	getchar();
#endif

	m_pShop->Update();
	rewind(stdin);
	getchar();

}
void SampleScene::Draw()
{
	m_pPlayer->Draw();
	m_pShop->Draw();
}