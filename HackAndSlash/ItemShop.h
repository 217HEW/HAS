#ifndef __ITEM_SHOP_H__
#define __ITEM_SHOP_H__

#include "SceneBase.h"
//#include "ItemBase.h"
#include "Player.h"
#include <list>

class ItemShop
{
public:
	ItemShop();
	~ItemShop();

	void Update();
	void Draw();

	void Entry(Player *pPlayer);
private:
	void Purchase();
	void Sale();

private:
	Player *m_pCustomer;//ãq
	std::list<ItemBase*> m_pItemStock;//ç›å…

	int m_step;//åªç›ÇÃèÛë‘
};


#endif // !__SCENE_BASE_H__

