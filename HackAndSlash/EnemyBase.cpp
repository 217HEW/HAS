#include "EnemyBase.h"
//#include "ItemBase.h"
#include "Armor.h"
#include "Weapon.h"
#include "Shield.h"
//#include <string>

EnemyBase::EnemyBase()
	:m_name("名もなき者")
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


//const char *...文字列定数の戻り値
//関数名の後のconst...クラスの関数を実行したときに、
//中身が変更できるか、変更できないかわからない。
//そこで、関数の後にconstを付けることで変更されない
//関数ということを考える
//const EnemyBase でもGetName関数は呼べるようになる
std::string EnemyBase::GetName()
{
	return m_name;
}
