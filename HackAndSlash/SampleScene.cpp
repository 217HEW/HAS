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
	//�G���o�Ă���
	pEnemy = new EnemyBase;
	//�@�G�̖��̂�\���i�Z�Z�����ꂽ
	printf("%s�����ꂽ\n", pEnemy->GetName().c_str());

	//�퓬
	//	> ����
	printf("�G��|����\n");

	//�A�C�e���h���b�v
	pItem = pEnemy->Drop();
	//�A�E�����A�C�e���̖��̂�\���i�Z�Z���E����
	printf("%s���E����\n", pItem->GetName().c_str());

	//�A�C�e���|�[�`�ɒǉ�
	if (pItem != nullptr)
	{
		if (!m_pPlayer->AddPouch(pItem))
		{
			//�擾�ł��Ȃ��A�C�e���͍폜
			delete pItem;
			printf("�������������ς��ł�\n");
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