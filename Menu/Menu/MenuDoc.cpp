// MenuDoc.cpp : CMenuDoc ���ʵ��
//

#include "stdafx.h"
#include "Menu.h"

#include "MenuDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMenuDoc

IMPLEMENT_DYNCREATE(CMenuDoc, CDocument)

BEGIN_MESSAGE_MAP(CMenuDoc, CDocument)
END_MESSAGE_MAP()


// CMenuDoc ����/����

CMenuDoc::CMenuDoc()
{
	// TODO: �ڴ����һ���Թ������

}

CMenuDoc::~CMenuDoc()
{
}

BOOL CMenuDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: �ڴ�������³�ʼ������
	// (SDI �ĵ������ø��ĵ�)

	return TRUE;
}




// CMenuDoc ���л�

void CMenuDoc::Serialize(CArchive& ar)
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


// CMenuDoc ���

#ifdef _DEBUG
void CMenuDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMenuDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CMenuDoc ����
