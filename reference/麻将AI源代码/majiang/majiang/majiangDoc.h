// majiangDoc.h : CmajiangDoc ��Ľӿ�
//


#pragma once


class CmajiangDoc : public CDocument
{
protected: // �������л�����
	CmajiangDoc();
	DECLARE_DYNCREATE(CmajiangDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// ʵ��
public:
	virtual ~CmajiangDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


