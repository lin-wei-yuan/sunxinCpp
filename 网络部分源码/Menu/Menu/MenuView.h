// MenuView.h : CMenuView ��Ľӿ�
//


#pragma once


class CMenuView : public CView
{
protected: // �������л�����
	CMenuView();
	DECLARE_DYNCREATE(CMenuView)

// ����
public:
	CMenuDoc* GetDocument() const;

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
	virtual ~CMenuView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // MenuView.cpp �еĵ��԰汾
inline CMenuDoc* CMenuView::GetDocument() const
   { return reinterpret_cast<CMenuDoc*>(m_pDocument); }
#endif

