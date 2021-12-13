#ifndef __ENEMY_BASE_H__
#define __ENEMY_BASE_H__

#include <string>
#include "ItemBase.h"

class EnemyBase
{
public:
	EnemyBase();
	EnemyBase(std::string name);
	virtual ~EnemyBase();

	void Update();
	void Draw();
	ItemBase* Drop();

	std::string GetName();

	


private:
	std::string m_name;
	int m_life;
};

#endif // __ENEMY_BASE_H__
