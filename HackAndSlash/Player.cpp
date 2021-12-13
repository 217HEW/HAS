#include "Player.h"
#include <Windows.h>
#include <stdio.h>
#include <string>

Player::Player()
	:m_nLife(100)
	, m_pWeapon(nullptr), m_pShield(nullptr), m_pArmor(nullptr)
{
	m_itemPouch.resize(10);

	std::vector<ItemBase*>::iterator it = m_itemPouch.begin();
	while (it != m_itemPouch.end())
	{
		*it = nullptr;
		it++;
	}
	
}
Player::~Player()
{
	//アイテムポーチの中身を空にする
	std::vector<ItemBase*>::iterator it = m_itemPouch.begin();
	while (it != m_itemPouch.end())
	{

		if (*it != nullptr)
		{
			delete *it;
			*it = nullptr;
		}
		it++;
	}
	m_itemPouch.clear();
}
void Player::Update()
{

}
void Player::Draw()
{
	printf("[アイテム一覧]\n");
	std::vector<ItemBase*>::iterator it = m_itemPouch.begin();
	while (it != m_itemPouch.end())
	{

		if (*it != nullptr)
		{
			printf("%s", (*it)->GetName().c_str());
		}
		it++;
	}
	printf("\n");
}

//アイテムポーチにアイテムを追加
bool Player::AddPouch(ItemBase *pItem)
{
	/*
	もし、アイテムポーチも１つのオブジェクトとして作っていた場合
	ポーチ自身の収納処理と、プレイヤーがポーチにしまうための処理の二つが必要
	*/

	std::vector<ItemBase*>::iterator it = m_itemPouch.begin();
	while (it != m_itemPouch.end())
	{

		if (*it == nullptr)
		{
			//アイテムを追加
			*it = pItem;
			return true;
		}
		it++;
	}
	return false;
}