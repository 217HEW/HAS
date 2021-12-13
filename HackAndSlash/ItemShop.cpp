#include "ItemShop.h"
#include "Armor.h"
#include "Weapon.h"
#include "Shield.h"
#include <list>

enum ShopMode
{
	SHOP_SELECT,	//���[�h�̑I��
	SHOP_PURCHASE,	//�w��
	SHOP_SALE,		//���p
};



ItemShop::ItemShop()
	:m_pCustomer(nullptr)
	, m_step(SHOP_SELECT)
{
	//�݌ɂ��m��
	for (int i = 0; i < 5; ++i)
	{
		ItemBase *pItem;
		switch (rand() % 3)
		{
		case 0: pItem = new ItemWeapon; break;
		case 1: pItem = new ItemArmor; break;
		case 2: pItem = new ItemShield; break;

		}
		m_pItemStock.push_back(pItem);
	}
}

ItemShop::~ItemShop()
{
	//�c���Ă���A�C�e�������
	std::list<ItemBase*>::iterator it;
	it = m_pItemStock.begin();
	while(it != m_pItemStock.end())
	{
		//iterator���w���f�[�^��ItemBase*
		//*��iterator�̍K��̃f�[�^���m�F�����Ƃ��A���̃f�[�^��ItemBase*�ł���
		if (*it != nullptr)
		{
			delete *it;
		}
		++it;
	}
}
void ItemShop::Update()
{
	printf("��������Ⴂ�܂�\n");
	//printf("�����ɂ悤�����I\n");
	//while (true)
	//{
	//	
	//}
	int select;
	switch (m_step)
	{
	case SHOP_SELECT:
		printf("0.�����܂����H\n");
		printf("1.����܂����H\n");
		printf(">");
		scanf("%d", &select);
		if (select == 0)
		{
			m_step = SHOP_PURCHASE;
		}
		else if (select == 1)
		{
			m_step = SHOP_SALE;
		}
		break;
	case SHOP_PURCHASE:
		Purchase();
		break;
	case SHOP_SALE:
		Sale();
		break;

	}
}
void ItemShop::Draw()
{
	std::list<ItemBase*>::iterator it;
	it = m_pItemStock.begin();

	printf("<�݌ɁF�c��%d>\n", m_pItemStock.size());
	while (it != m_pItemStock.end())
	{
		printf("%s\n", (*it)->GetName().c_str());
		it++;
	}
}

void ItemShop::Entry(Player *pPlayer)
{
	m_pCustomer = pPlayer;
}

void ItemShop::Purchase()
{
	int select;
	int cnt = 0;
	//���������A�C�e����I��
	std::list<ItemBase*>::iterator it = m_pItemStock.begin();
	while (it != m_pItemStock.end())
	{
		printf("%d)%s\n", ++cnt, (*it)->GetName().c_str());
		++it;
	}
	printf("0.���ǂ�\n");
	printf(">");
	scanf("%d", &select);

	//0.�߂�̑Ή�����
	if (select == 0)
	{
		m_step = SHOP_SELECT;
		return;
	}

	//�v���C���[�̃A�C�e���|�[�`�֒ǉ�
	it = m_pItemStock.begin();
	if (it == m_pItemStock.end())
	{
		printf("�݌ɂ�����܂���\n");
		return;
	}
	while (--select)
	{
		++it;
	}
	m_pCustomer->AddPouch(*it);

	//�݌ɂ���O���̃A�C�e�����폜����
	m_pItemStock.erase(it);
	printf("�w�����܂���\n");

}
void ItemShop::Sale()
{
	//�q�̏����i���ꗗ�\��

	//�����i�̒����甄�p�������ԍ���I��

	//�q(�v���C���[)�̃A�C�e���|�[�`����O���̃A�C�e�����폜

	printf("�\���󂠂�܂���A�������̂������悤�ł��B\n");
	return;


}















