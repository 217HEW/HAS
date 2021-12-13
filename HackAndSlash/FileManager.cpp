//#include "FileManager.h"
//
//
//FileManager::FileManager()
//{
//
//}
//FileManager::~FileManager()
//{
//	//読み込まれたデータを解放
//	ResourceMapIt it = m_resources.begin();
//	while (it != m_resources.end())
//	{
//		delete it->second;
//		++it;
//	}
//}
//bool FileManager::Load(std::string file)
//{
//	//読み込み済みのデータであれば処理をしない
//	if (m_resources.find(file) != m_resources.end())
//	{
//		//キーが見つかった = すでに読み込まれたファイル
//		return true;
//	}
//	//---キーがないので読み込み処理
//	//拡張子ごとにデータを読み込み
//	ResourceBase *pResource;
//
//	//マップに登録
//	m_resources.insert(ResourceMapPair(file, pResource));
//	return true;
//
//}
//ResourceBase *FileManager::Get(std::string file)
//{
//	//データが存在するか
//	if (m_resources.find(file) == m_resources.end())
//	{
//		//無かったからnullを返す
//		return nullptr;
//	}
//
//	//存在するデータを戻り値で返す
//	return m_resources.at(file);
//}