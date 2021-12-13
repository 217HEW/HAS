#ifndef __PLAYER_H__
#define __PLAYER_H__

//プレイヤーは自分が扱う情報を知っていたい
#include "ItemBase.h"

#include <vector>

class Player
{
public:
	Player();
	~Player();

	void Update();
	void Draw();

	//アイテムポーチにアイテム追加
	bool AddPouch(ItemBase *pItem);

private:
	int m_nLife;	//体力

	//プレイヤーが身に着けているもの
	ItemBase  *m_pWeapon;
	ItemBase  *m_pShield;
	ItemBase  *m_pArmor;

	//プレイヤーが持っているもの
	//アイテムポーチの1スロットごとにポインタで扱う
	//そのスロットをたくさん扱う→配列として扱う
	//ポインタ配列→ポインタのポインタダブルポインタ
	//ItemBase **m_ppItemPouch;
	//int m_itemPouchSize;

	std::vector<ItemBase*> m_itemPouch;
};

#endif // __PLAYER_H__
