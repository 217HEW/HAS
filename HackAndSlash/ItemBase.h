#ifndef __ITEM_BASE_H__
#define __ITEM_BASE_H__

#include <string>

class ItemBase
{
public:
	ItemBase();
	ItemBase(std::string name);
	~ItemBase();

	//const char *...������萔�̖߂�l
	//�֐����̌��const...�N���X�̊֐������s�����Ƃ��ɁA
	//���g���ύX�ł��邩�A�ύX�ł��Ȃ����킩��Ȃ��B
	//�����ŁA�֐��̌��const��t���邱�ƂŕύX����Ȃ�
	//�֐��Ƃ������Ƃ��l����
	//const ItemBase �ł�GetName�֐��͌Ăׂ�悤�ɂȂ�
	std::string GetName() const;

private:
	std::string m_name;
};

#endif // __ITEM_BASE_H__
