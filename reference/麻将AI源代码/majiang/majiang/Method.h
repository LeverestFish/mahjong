#pragma once
#include "GameData.h"
#include "Mp3Sound.h"
//��Ϸ�㷨��
class CMethod
{
public:

	CMethod(void);
	void  Shuffle(int *P);    //ϴ��
	bool  Move(vector<CARDS> &,CPoint p); //����
	bool  buttonDown(vector<CARDS> &,int&);//��굥��
	bool  hupai(vector<temp1> &);//�����㷨
	void  sendCard(vector<CARDS> &,PLAYER &);//����
	int  ChaiPai(vector<CARDS> &);//�����㷨�������Զ������㷨��
	void deleteCards(vector<CARDS> &,PLAYER & send );
	bool pengPai(vector<CARDS> &,PLAYER & send);//����
	bool gangPai(vector<CARDS> &,PLAYER & send);//����
	bool anGangPai(vector<CARDS> &d,int index);//������
	
public:
	bool isChuPai;
	bool duizi;
	vector<temp1> tempvec;
	 Mp3Sound  m_mp3;
	~CMethod(void);
};
