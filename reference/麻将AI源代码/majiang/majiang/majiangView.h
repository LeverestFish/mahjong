// majiangView.h : CmajiangView ��Ľӿ�
//


#pragma once

#define WM_ON_SENDCARD  (WM_USER+103)
class CmajiangView : public CView
{
protected: // �������л�����
	CmajiangView();
	DECLARE_DYNCREATE(CmajiangView)

// ����
public:
	CmajiangDoc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CmajiangView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg LRESULT OnSendMessage(WPARAM wParam, LPARAM lParam); 
public:
	afx_msg void OnTimer(UINT_PTR nIDEvent);
};

#ifndef _DEBUG  // majiangView.cpp �еĵ��԰汾
inline CmajiangDoc* CmajiangView::GetDocument() const
   { return reinterpret_cast<CmajiangDoc*>(m_pDocument); }
#endif

