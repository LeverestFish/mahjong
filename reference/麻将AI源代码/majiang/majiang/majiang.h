// majiang.h : majiang Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CmajiangApp:
// �йش����ʵ�֣������ majiang.cpp
//

class CmajiangApp : public CWinApp
{
public:
	CmajiangApp();


// ��д
public:
	virtual BOOL InitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CmajiangApp theApp;