// majiangDoc.cpp : CmajiangDoc ���ʵ��
//

#include "stdafx.h"
#include "majiang.h"

#include "majiangDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CmajiangDoc

IMPLEMENT_DYNCREATE(CmajiangDoc, CDocument)

BEGIN_MESSAGE_MAP(CmajiangDoc, CDocument)
END_MESSAGE_MAP()


// CmajiangDoc ����/����

CmajiangDoc::CmajiangDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CmajiangDoc::~CmajiangDoc()
{
}

BOOL CmajiangDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CmajiangDoc ���л�

void CmajiangDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CmajiangDoc ���

#ifdef _DEBUG
void CmajiangDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CmajiangDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CmajiangDoc ����
