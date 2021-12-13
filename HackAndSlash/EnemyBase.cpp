#include "EnemyBase.h"
//#include "ItemBase.h"
#include "Armor.h"
#include "Weapon.h"
#include "Shield.h"
//#include <string>

EnemyBase::EnemyBase()
	:m_name("�����Ȃ���")
	,m_life(100)
{

}

EnemyBase::EnemyBase(std::string name)
	:m_name(name)
	,m_life(100)
{

}

EnemyBase::~EnemyBase()
{
}

void EnemyBase::Update() 
{

}

void EnemyBase::Draw()
{

}
ItemBase* EnemyBase::Drop()
{
	int random = rand() % 3;
	switch (random)
	{
	case 0:return new ItemWeapon;
	case 1:return new ItemArmor;
	case 2:return new ItemShield;
	default:return nullptr;
	}
}


//const char *...������萔�̖߂�l
//�֐����̌��const...�N���X�̊֐������s�����Ƃ��ɁA
//���g���ύX�ł��邩�A�ύX�ł��Ȃ����킩��Ȃ��B
//�����ŁA�֐��̌��const��t���邱�ƂŕύX����Ȃ�
//�֐��Ƃ������Ƃ��l����
//const EnemyBase �ł�GetName�֐��͌Ăׂ�悤�ɂȂ�
std::string EnemyBase::GetName()
{
	return m_name;
}
