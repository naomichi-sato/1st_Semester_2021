
#ifndef ENEMY_H
#define ENEMY_H

#include <stdio.h>

class Enemy
{
public:
	// 第９回
	Enemy();	// コンストラクタ
	~Enemy();	// デストラクタ

	void InitStatus(const char* enemyName);		// ステータス初期化
	void ShowStatus();							// ステータス表示

	// メンバ変数
	char Name[32];
	int Hp;

	int Mp;

private:
	int Atk;
	int Def;
};

#endif

