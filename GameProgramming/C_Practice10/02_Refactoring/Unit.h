
#ifndef UNIT_H
#define UNIT_H

#include "Common.h"

// Unitクラス
class Unit
{
public:
	// コンストラクタ
	Unit();
	// デストラクタ
	~Unit();

	void InitRandomStatus();

	char	name[32];
	Status	status;
};

#endif // #ifndef UNIT_H
