// majiangView.cpp : CmajiangView ���ʵ��
//

#include "stdafx.h"
#include "majiang.h"

#include "majiangDoc.h"
#include "majiangView.h"
#include "Mp3Sound.h"
#include "Cards.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


Mp3Sound m_mp3;
CCards m_card;


IMPLEMENT_DYNCREATE(CmajiangView, CView)

BEGIN_MESSAGE_MAP(CmajiangView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()

	ON_MESSAGE(WM_ON_SENDCARD, OnSendMessage)
	ON_WM_TIMER()
END_MESSAGE_MAP()

// CmajiangView ����/����

CmajiangView::CmajiangView()
{


}

CmajiangView::~CmajiangView()
{
}

BOOL CmajiangView::PreCreateWindow(CREATESTRUCT& cs)
{
	
      m_card.initCards();
	return CView::PreCreateWindow(cs);
}


void CmajiangView::OnDraw(CDC* pDC)
{
	CmajiangDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	if ( m_card.GetMessage()&&m_card.getGameState()==GAME_START)
	{
		m_card.SetMessage(false);
		m_card.getPai();
		SetTimer(1,1000,0);

	}
	if (!pDoc)
		return;
	m_card.drawCards(pDC);

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CmajiangView ��ӡ

BOOL CmajiangView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CmajiangView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CmajiangView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CmajiangView ���

#ifdef _DEBUG
void CmajiangView::AssertValid() const
{
	CView::AssertValid();
}

void CmajiangView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CmajiangDoc* CmajiangView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CmajiangDoc)));
	return (CmajiangDoc*)m_pDocument;
}
#endif //_DEBUG


// CmajiangView ��Ϣ�������

void CmajiangView::OnMouseMove(UINT nFlags, CPoint point)
{
	
	m_card.mouseMove(point);
	CRect m_clientRect;
	m_clientRect.left=0;
	m_clientRect.top=0;
	m_clientRect.right=900;
	m_clientRect.bottom=620;
	InvalidateRect(&m_clientRect,false);
	CView::OnMouseMove(nFlags, point);
}

void CmajiangView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ

	m_card.lbuttonDown(point);

	CRect m_clientRect;
	m_clientRect.left=0;
	m_clientRect.top=0;
	m_clientRect.right=900;
	m_clientRect.bottom=620;
	InvalidateRect(&m_clientRect,false);
	CView::OnLButtonDown(nFlags, point);
}
LRESULT CmajiangView::OnSendMessage(WPARAM wParam, LPARAM lParam)
{

	if (m_card.GetWhoSendCard()!=PLAYER_A&&m_card.getGameState()==GAME_START)
	{
		m_card.computerSendCards();

	}

	CRect m_clientRect;
	m_clientRect.left=0;
	m_clientRect.top=0;
	m_clientRect.right=900;
	m_clientRect.bottom=620;
	InvalidateRect(&m_clientRect,false);
	return 0;

}
void CmajiangView::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: �ڴ������Ϣ�����������/�����Ĭ��ֵ
    if (nIDEvent==1)
    {
		KillTimer(1);
		SendMessage(WM_ON_SENDCARD);
    }
	CView::OnTimer(nIDEvent);
}
