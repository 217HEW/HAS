#ifndef __ITEM_BASE_H__
#define __ITEM_BASE_H__

#include <string>

class ItemBase
{
public:
	ItemBase();
	ItemBase(std::string name);
	~ItemBase();

	//const char *...文字列定数の戻り値
	//関数名の後のconst...クラスの関数を実行したときに、
	//中身が変更できるか、変更できないかわからない。
	//そこで、関数の後にconstを付けることで変更されない
	//関数ということを考える
	//const ItemBase でもGetName関数は呼べるようになる
	std::string GetName() const;

private:
	std::string m_name;
};

#endif // __ITEM_BASE_H__
