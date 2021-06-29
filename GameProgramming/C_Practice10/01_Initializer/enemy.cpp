
#include "enemy.h"

// コンストラクタ
Enemy::Enemy()
	: Hp(8)
	, Mp(1)
	, Atk(2)
	, Def(1)
{
	printf( "コンストラクタ\n" );
	Name[0] = '\0';
}

// デストラクタ
Enemy::~Enemy()
{
	printf( "デストラクタ\n" );
}

// ステータス初期化
void Enemy::InitStatus(const char* enemyName)
{
	sprintf_s( Name, 32, "%s", enemyName );
	Hp = 8;
	Atk = 2;
	Def = 1;
}

// ステータス表示
void Enemy::ShowStatus()
{
	printf("--- Enemy Status ---\n");
	printf("Name : %s\n", Name);
	printf("Hp   : %02d\n", Hp );
	printf("Mp   : %02d\n", Mp );
	printf("Atk  : %02d\n", Atk );
	printf("Def  : %02d\n", Def );
}

