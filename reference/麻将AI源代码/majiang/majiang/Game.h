#pragma once
//��Ϸ��
#include "Method.h"
#include "Cards.h"
class CGame
{
public:
	CGame(void);
	void initGame();//��ʼ����Ϸ
	void startGame();//��ʼ��Ϸ
	void updataGame(CDC * pdc);//������Ϸ
	void endGame();//������Ϸ
public:
	CMethod   m_member;
	CCards   m_gameCards;
	~CGame(void);
};
