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
	//敵が出てくる
	pEnemy = new EnemyBase;
	//?@敵の名称を表示（〇〇が現れた
	printf("%sが現れた\n", pEnemy->GetName().c_str());

	//戦闘
	//	> 割愛
	printf("敵を倒した\n");

	//アイテムドロップ
	pItem = pEnemy->Drop();
	//?A拾ったアイテムの名称を表示（〇〇を拾った
	printf("%sを拾った\n", pItem->GetName().c_str());

	//アイテムポーチに追加
	if (pItem != nullptr)
	{
		if (!m_pPlayer->AddPouch(pItem))
		{
			//取得できないアイテムは削除
			delete pItem;
			printf("持ち物がいっぱいです\n");
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