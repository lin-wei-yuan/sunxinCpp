// MenuDoc.h : CMenuDoc ��Ľӿ�
//


#pragma once


class CMenuDoc : public CDocument
{
protected: // �������л�����
	CMenuDoc();
	DECLARE_DYNCREATE(CMenuDoc)

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
	virtual ~CMenuDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
};


