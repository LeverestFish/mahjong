#include "StdAfx.h"
#include "Game.h"

CGame::CGame(void)
{


}
void CGame::initGame()//��ʼ����Ϸ
{

 m_gameCards.initCards();

 


}
void CGame::startGame()//��ʼ��Ϸ
{



}
void CGame::updataGame(CDC * pdc)//������Ϸ
{
  m_gameCards.drawCards(pdc);
}
void CGame::endGame()//������Ϸ
{



}
CGame::~CGame(void)
{
}
