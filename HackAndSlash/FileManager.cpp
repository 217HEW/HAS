//#include "FileManager.h"
//
//
//FileManager::FileManager()
//{
//
//}
//FileManager::~FileManager()
//{
//	//�ǂݍ��܂ꂽ�f�[�^�����
//	ResourceMapIt it = m_resources.begin();
//	while (it != m_resources.end())
//	{
//		delete it->second;
//		++it;
//	}
//}
//bool FileManager::Load(std::string file)
//{
//	//�ǂݍ��ݍς݂̃f�[�^�ł���Ώ��������Ȃ�
//	if (m_resources.find(file) != m_resources.end())
//	{
//		//�L�[���������� = ���łɓǂݍ��܂ꂽ�t�@�C��
//		return true;
//	}
//	//---�L�[���Ȃ��̂œǂݍ��ݏ���
//	//�g���q���ƂɃf�[�^��ǂݍ���
//	ResourceBase *pResource;
//
//	//�}�b�v�ɓo�^
//	m_resources.insert(ResourceMapPair(file, pResource));
//	return true;
//
//}
//ResourceBase *FileManager::Get(std::string file)
//{
//	//�f�[�^�����݂��邩
//	if (m_resources.find(file) == m_resources.end())
//	{
//		//������������null��Ԃ�
//		return nullptr;
//	}
//
//	//���݂���f�[�^��߂�l�ŕԂ�
//	return m_resources.at(file);
//}