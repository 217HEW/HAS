#ifndef __PLAYER_H__
#define __PLAYER_H__

//�v���C���[�͎�������������m���Ă�����
#include "ItemBase.h"

#include <vector>

class Player
{
public:
	Player();
	~Player();

	void Update();
	void Draw();

	//�A�C�e���|�[�`�ɃA�C�e���ǉ�
	bool AddPouch(ItemBase *pItem);

private:
	int m_nLife;	//�̗�

	//�v���C���[���g�ɒ����Ă������
	ItemBase  *m_pWeapon;
	ItemBase  *m_pShield;
	ItemBase  *m_pArmor;

	//�v���C���[�������Ă������
	//�A�C�e���|�[�`��1�X���b�g���ƂɃ|�C���^�ň���
	//���̃X���b�g���������񈵂����z��Ƃ��Ĉ���
	//�|�C���^�z�񁨃|�C���^�̃|�C���^�_�u���|�C���^
	//ItemBase **m_ppItemPouch;
	//int m_itemPouchSize;

	std::vector<ItemBase*> m_itemPouch;
};

#endif // __PLAYER_H__
