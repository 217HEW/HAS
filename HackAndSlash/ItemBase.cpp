#include "ItemBase.h"
#include <string.h>

ItemBase::ItemBase()
	:m_name("���̖��ݒ�")
{

}

ItemBase::ItemBase(std::string name)
	:m_name(name)
{
}

ItemBase::~ItemBase()
{
}

	//const char *...������萔�̖߂�l
	//�֐����̌��const...�N���X�̊֐������s�����Ƃ��ɁA
	//���g���ύX�ł��邩�A�ύX�ł��Ȃ����킩��Ȃ��B
	//�����ŁA�֐��̌��const��t���邱�ƂŕύX����Ȃ�
	//�֐��Ƃ������Ƃ��l����
	//const ItemBase �ł�GetName�֐��͌Ăׂ�悤�ɂȂ�
 std::string ItemBase::GetName() const
{
	return m_name;
}
