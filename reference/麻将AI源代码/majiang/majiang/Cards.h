#pragma once

#include "Method.h"
#include "GameData.h"
#include "Mp3Sound.h"


class CCards
{
public:
	void initCards();//��ʼ��108����
	void drawCards(CDC * dc);//������Ϸ�е���
	void mouseMove(CPoint &p);
	void lbuttonDown(CPoint &);//����������
	void computerSendCards();//���Գ���
	void getPai();//����
	bool isPao(vector<CARDS>&,int);//����
	bool fangPao(int);
	void SetMessage(bool IS){m_isMessage =IS;}//�����ֶ�������Ϣ
	bool GetMessage(){return m_isMessage;}//�ж��Ƿ��ֶ�������Ϣ
	int GetWhoSendCard(){return m_sendCard.whoChupai;}//��õ�ǰ��˭����
	bool  IsHuPai(vector<CARDS>& player);
	bool  whoPengPai();//�ж�˭Ҫ����
	bool  whoGangPai();//�ж�˭Ҫ����
	bool whoAnGang(int index);
	bool getIsPeng(){return m_computerGang;}
	void setPeng(bool is){ m_isPaintPeng =is;}

	bool getIsHu(){return m_isHuPai;}
	void setHu(bool is){ m_isHuPai =is;}

	int getGameState(){return m_gameState;} //��ȡ��Ϸ״̬
	void setGameState(int game){m_gameState =game;}
	
	CCards(void);
public:
	//int   m_sendCardIndex;//��¼��ǰ���Ƶ���ֵ
	HBITMAP m_bitmap[30];
	CDC m_dcBuffer;//˫���屳��DC
	CDC m_back;//����
	CDC m_dcImage;//��DC
	CDC m_2pass;
	CDC m_dcMask;//����ͼDC
	int intarray_arrow[8]; //��ͷ��������
	int m_gameState;//��Ϸ״̬
    bool m_isMessage;  //�Ƿ��ֶ�������Ϣ
	bool m_isPaintPeng; //��������ͼƬ
	bool m_isHuPai;     //���ƺ��Ƶ�ͼƬ
	bool m_computerGang;//���Ը���
	bool m_meGang;//�ж��Լ��Ƿ����
	PLAYER  m_sendCard; //����

	Mp3Sound m_mp3;
 
	CMethod  m_metCards;
	vector<CARDS>  m_vecCards;
   vector<CARDS> m_vcsendCard;
	vector<CARDS> m_playA;
	vector<CARDS> m_playB;
	vector<CARDS> m_playC;
	vector<CARDS> m_playD;
	~CCards(void);
};
