#include "ItemShop.h"
#include "Armor.h"
#include "Weapon.h"
#include "Shield.h"
#include <list>

enum ShopMode
{
	SHOP_SELECT,	//モードの選択
	SHOP_PURCHASE,	//購入
	SHOP_SALE,		//売却
};



ItemShop::ItemShop()
	:m_pCustomer(nullptr)
	, m_step(SHOP_SELECT)
{
	//在庫を確保
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
	//残っているアイテムを解放
	std::list<ItemBase*>::iterator it;
	it = m_pItemStock.begin();
	while(it != m_pItemStock.end())
	{
		//iteratorが指すデータはItemBase*
		//*でiteratorの幸先のデータを確認したとき、そのデータはItemBase*である
		if (*it != nullptr)
		{
			delete *it;
		}
		++it;
	}
}
void ItemShop::Update()
{
	printf("いらっしゃいませ\n");
	//printf("万屋にようこそ！\n");
	//while (true)
	//{
	//	
	//}
	int select;
	switch (m_step)
	{
	case SHOP_SELECT:
		printf("0.かいますか？\n");
		printf("1.うりますか？\n");
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

	printf("<在庫：残り%d>\n", m_pItemStock.size());
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
	//買いたいアイテムを選択
	std::list<ItemBase*>::iterator it = m_pItemStock.begin();
	while (it != m_pItemStock.end())
	{
		printf("%d)%s\n", ++cnt, (*it)->GetName().c_str());
		++it;
	}
	printf("0.もどる\n");
	printf(">");
	scanf("%d", &select);

	//0.戻るの対応処理
	if (select == 0)
	{
		m_step = SHOP_SELECT;
		return;
	}

	//プレイヤーのアイテムポーチへ追加
	it = m_pItemStock.begin();
	if (it == m_pItemStock.end())
	{
		printf("在庫がありません\n");
		return;
	}
	while (--select)
	{
		++it;
	}
	m_pCustomer->AddPouch(*it);

	//在庫から外套のアイテムを削除する
	m_pItemStock.erase(it);
	printf("購入しました\n");

}
void ItemShop::Sale()
{
	//客の所持品を一覧表示

	//所持品の中から売却したい番号を選択

	//客(プレイヤー)のアイテムポーチから外套のアイテムを削除

	printf("申し訳ありません、売れるものが無いようです。\n");
	return;


}















