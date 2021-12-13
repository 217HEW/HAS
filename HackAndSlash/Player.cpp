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
	//�A�C�e���|�[�`�̒��g����ɂ���
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
	printf("[�A�C�e���ꗗ]\n");
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

//�A�C�e���|�[�`�ɃA�C�e����ǉ�
bool Player::AddPouch(ItemBase *pItem)
{
	/*
	�����A�A�C�e���|�[�`���P�̃I�u�W�F�N�g�Ƃ��č���Ă����ꍇ
	�|�[�`���g�̎��[�����ƁA�v���C���[���|�[�`�ɂ��܂����߂̏����̓���K�v
	*/

	std::vector<ItemBase*>::iterator it = m_itemPouch.begin();
	while (it != m_itemPouch.end())
	{

		if (*it == nullptr)
		{
			//�A�C�e����ǉ�
			*it = pItem;
			return true;
		}
		it++;
	}
	return false;
}