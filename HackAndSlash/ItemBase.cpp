#include "ItemBase.h"
#include <string.h>

ItemBase::ItemBase()
	:m_name("名称未設定")
{

}

ItemBase::ItemBase(std::string name)
	:m_name(name)
{
}

ItemBase::~ItemBase()
{
}

	//const char *...文字列定数の戻り値
	//関数名の後のconst...クラスの関数を実行したときに、
	//中身が変更できるか、変更できないかわからない。
	//そこで、関数の後にconstを付けることで変更されない
	//関数ということを考える
	//const ItemBase でもGetName関数は呼べるようになる
 std::string ItemBase::GetName() const
{
	return m_name;
}
