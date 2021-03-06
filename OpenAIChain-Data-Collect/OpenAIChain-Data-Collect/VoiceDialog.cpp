// VoiceDialog.cpp: 实现文件
//

#include "stdafx.h"
#include "OpenAIChain-Data-Collect.h"
#include "VoiceDialog.h"
#include "afxdialogex.h"


// VoiceDialog 对话框

IMPLEMENT_DYNAMIC(VoiceDialog, CDialog)

VoiceDialog::VoiceDialog(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{
#ifndef _WIN32_WCE
	EnableActiveAccessibility();
#endif

	

}

VoiceDialog::~VoiceDialog()
{
}

void VoiceDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_edit);

	DDX_Control(pDX, IDC_LIST1, m_list);
}


BEGIN_MESSAGE_MAP(VoiceDialog, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &VoiceDialog::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &VoiceDialog::OnBnClickedButton2)
END_MESSAGE_MAP()


// VoiceDialog 消息处理程序


void VoiceDialog::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码
	MessageBox(L"开始录音", L"开始录音", 0);
}


void VoiceDialog::OnBnClickedButton2()
{
	// TODO: 在此添加控件通知处理程序代码
	//MessageBox(L"停止录音", L"停止录音", 0);
	MessageBox(L"停止录音", L"数据提交到区块链OpenAIchain", 0);
}


BOOL VoiceDialog::Create(LPCTSTR lpszTemplateName, CWnd* pParentWnd)
{
	// TODO: 在此添加专用代码和/或调用基类

	return CDialog::Create(lpszTemplateName, pParentWnd);
}


BOOL VoiceDialog::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  在此添加额外的初始化
	m_list.AddString(L"语音训练1");
	m_list.AddString(L"语音训练2");
	m_list.AddString(L"语音训练3");
	m_list.AddString(L"语音训练4");
	m_list.AddString(L"语音训练5");
	m_edit.SetWindowTextW(L"如皋黑客松-源于清华的魔王团队，人工智能与区块链的集合-openAIchain");

	return TRUE;  // return TRUE unless you set the focus to a control
				  // 异常: OCX 属性页应返回 FALSE
}
