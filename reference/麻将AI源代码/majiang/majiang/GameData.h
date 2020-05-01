#pragma once
#ifndef  _GAME_H_
#define _GAME_H_


#include <vector>
using namespace std;
#define   PLAYER_A         0        //�Լ�����
#define   PLAYER_B         1        //�Ҽҵ���
#define   PLAYER_C         2        //�Լҵ���
#define   PLAYER_D         3        //��ҵ���
#define   PLAYER_Z         4        //̨���ϻ�û������

#define  GAME_START       5
#define  GAME_END         6
#define  GAME_PAUSE        7
enum QUANZHI
{
	PAI_NULL,      //��û����֮ǰ
	PAI_DANGPAI,   //����
	PAI_DANPAI_1,
	PAI_DAPAI_1, //��2  3������2���Ƴ�˳�ӣ�
	PAI_DAPAI_2, //��1  3ֻ��1�����ܳ�˳�ӣ�
	PAI_DUIZI,    //����
	PAI_SHUNZI,   //˳��
	PAI_SANTIAO    //3��
};
struct CARDS                          //�ƵĽṹ�� 
{
	CARDS(){isclick =false;duizi=true;isOut=false;value1 =PAI_NULL;}
	int x;                            //������Ļ�ϵ�X����
	int y;                            //������Ļ�ϵ�Y����
	int cx;                           //����ͼƬ�ϵ�X����
	int cy;                           //����ͼƬ�ϵ�Y����
	int index;                        //��ֵ�ô�С
	int huase;                        //�ƵĻ�ɫ
	int whoCard;                       // ˭����
	int cardTp;                       //�Ƶ����� ��1 ���� 2 ����   3 ����  4 ���ƣ�
	bool isclick;                       //�ж����Ƿ񱻵����
	int wide;                       //ͼƬ�Ŀ�
	int high;                       //ͼƬ�ĸ�
	bool duizi;                     //�ж��Ƿ񻹿��Գ�Ϊ����
	CRect  s_rcet;                     //rect ���������ж���ҵ���
	QUANZHI value1;
	bool  isOut;
	bool operator <   (const CARDS& rhs )   const //��������ʱ����д�ĺ���
	{ 
		return index < rhs.index; 
	}

};

struct  PLAYER
{
	PLAYER()
	{
		whoChupai =PLAYER_A;
		cardTp =1;
	}
	int  whoChupai;     //�Ƿ���ҳ���
	int  index;//��ǰ�Ƶ���ֵ 
	int  cardTp; //�Ƶ���ʽ          1  ����   2 ����  3 ������  4 ����
};



struct temp1 
{
	temp1()
	{
		duizi=true;
	}
	int index;
	bool duizi;

	bool operator <   (const temp1& rhs )   const //��������ʱ����д�ĺ���
	{ 
		return index < rhs.index; 
	}
};


#endif    