// 这段 MFC 示例源代码演示如何使用 MFC Microsoft Office Fluent 用户界面
// (“Fluent UI”)。该示例仅供参考，
// 用以补充《Microsoft 基础类参考》和
// MFC C++ 库软件随附的相关电子文档。
// 复制、使用或分发 Fluent UI 的许可条款是单独提供的。
// 若要了解有关 Fluent UI 许可计划的详细信息，请访问
// https://go.microsoft.com/fwlink/?LinkId=238214.
//
// 版权所有(C) Microsoft Corporation
// 保留所有权利。

// OpenAIChain-Data-UseView.cpp: COpenAIChainDataUseView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "OpenAIChain-Data-Use.h"
#endif

#include "OpenAIChain-Data-UseDoc.h"
#include "OpenAIChain-Data-UseView.h"
#include<cstdio>
#include<cstdlib>
#include<Windows.h>
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COpenAIChainDataUseView

IMPLEMENT_DYNCREATE(COpenAIChainDataUseView, CFormView)

BEGIN_MESSAGE_MAP(COpenAIChainDataUseView, CFormView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CFormView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &COpenAIChainDataUseView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_BUTTON2, &COpenAIChainDataUseView::OnButton2)
	ON_COMMAND(ID_BUTTON3, &COpenAIChainDataUseView::OnButton3)
	ON_COMMAND(ID_BUTTON4, &COpenAIChainDataUseView::OnButton4)
	ON_COMMAND(ID_BUTTON9, &COpenAIChainDataUseView::OnButton9)
	ON_COMMAND(ID_BUTTON5, &COpenAIChainDataUseView::OnButton5)
	ON_COMMAND(ID_BUTTON6, &COpenAIChainDataUseView::OnButton6)
	ON_COMMAND(ID_BUTTON7, &COpenAIChainDataUseView::OnButton7)
	ON_COMMAND(ID_BUTTON8, &COpenAIChainDataUseView::OnButton8)
	ON_COMMAND(ID_BUTTON10, &COpenAIChainDataUseView::OnButton10)
	ON_COMMAND(ID_BUTTON11, &COpenAIChainDataUseView::OnButton11)
	ON_COMMAND(ID_BUTTON12, &COpenAIChainDataUseView::OnButton12)
	ON_COMMAND(ID_BUTTON201, &COpenAIChainDataUseView::OnButton201)
	ON_COMMAND(ID_BUTTON301, &COpenAIChainDataUseView::OnButton301)
	ON_COMMAND(ID_BUTTON20, &COpenAIChainDataUseView::OnButton20)
	ON_COMMAND(ID_BUTTON21, &COpenAIChainDataUseView::OnButton21)
END_MESSAGE_MAP()

// COpenAIChainDataUseView 构造/析构

COpenAIChainDataUseView::COpenAIChainDataUseView()
	: CFormView(IDD_OPENAICHAINDATAUSE_FORM)
{
	EnableActiveAccessibility();
	// TODO: 在此处添加构造代码

}

COpenAIChainDataUseView::~COpenAIChainDataUseView()
{
}

void COpenAIChainDataUseView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
}

BOOL COpenAIChainDataUseView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CFormView::PreCreateWindow(cs);
}

void COpenAIChainDataUseView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	ResizeParentToFit();

}


// COpenAIChainDataUseView 打印


void COpenAIChainDataUseView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL COpenAIChainDataUseView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void COpenAIChainDataUseView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void COpenAIChainDataUseView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}

void COpenAIChainDataUseView::OnPrint(CDC* pDC, CPrintInfo* /*pInfo*/)
{
	// TODO: 在此处添加自定义打印代码
}

void COpenAIChainDataUseView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void COpenAIChainDataUseView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// COpenAIChainDataUseView 诊断

#ifdef _DEBUG
void COpenAIChainDataUseView::AssertValid() const
{
	CFormView::AssertValid();
}

void COpenAIChainDataUseView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

COpenAIChainDataUseDoc* COpenAIChainDataUseView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COpenAIChainDataUseDoc)));
	return (COpenAIChainDataUseDoc*)m_pDocument;
}
#endif //_DEBUG


// COpenAIChainDataUseView 消息处理程序


void COpenAIChainDataUseView::OnButton2()
{
	// TODO: 在此添加命令处理程序代码
	//system("python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\语音识别.py  && pause"  );
	//CString paramstr= L"python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\语音识别.py";
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\语音识别.py";
	CString paramstr = L"python   " + mypath;;
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}


}


void COpenAIChainDataUseView::OnButton3()
{
	// TODO: 在此添加命令处理程序代码
	//CString paramstr = L"python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\通用识别.py";
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\通用识别.py";
	CString paramstr = L"python   " + mypath;;
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}
}


void COpenAIChainDataUseView::OnButton4()
{
	// TODO: 在此添加命令处理程序代码
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\通用识别.py";
	CString paramstr = L"python   " + mypath;;
	//CString paramstr = L"python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\通用识别.py";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}
}


void COpenAIChainDataUseView::OnButton9()
{
	//system("\"C:\\Program Files(x86)\\Microsoft Visual Studio\\Shared\\Python36_64\\python.exe\" E:/数字资产/OpenAIChain/pyAI/图像识别/人脸识别.py");
	// TODO: 在此添加命令处理程序代码
	//system("python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\语音识别.py  && pause"  )
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\人脸识别.py";
	CString paramstr = L"python   " + mypath;;
	//CString paramstr = L"python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\人脸识别.py";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}


}


void COpenAIChainDataUseView::OnButton5()
{
	// TODO: 在此添加命令处理程序代码
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\动物识别.py";
	CString paramstr = L"python   " + mypath;
	//system("\"C:\\Program Files(x86)\\Microsoft Visual Studio\\Shared\\Python36_64\\python.exe\" E:/数字资产/OpenAIChain/pyAI/图像识别/动物识别.py");
	//CString paramstr = L"python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\动物识别.py";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}


}


void COpenAIChainDataUseView::OnButton6()
{
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\动物识别.py";
	CString paramstr = L"python   " + mypath;
	// TODO: 在此添加命令处理程序代码
	//system("\"C:\\Program Files(x86)\\Microsoft Visual Studio\\Shared\\Python36_64\\python.exe\" E:/数字资产/OpenAIChain/pyAI/图像识别/动物识别.py");
	//CString paramstr = L"python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\动物识别.py";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}

}


void COpenAIChainDataUseView::OnButton7()
{
	// TODO: 在此添加命令处理程序代码
	//system("\"C:\\Program Files(x86)\\Microsoft Visual Studio\\Shared\\Python36_64\\python.exe\" E:/数字资产/OpenAIChain/pyAI/图像识别/植物识别.py");
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\植物识别.py";
	CString paramstr = L"python   " + mypath;
	//CString paramstr = L"python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\植物识别.py";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}

}


void COpenAIChainDataUseView::OnButton8()
{
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\菜品识别.py";
	CString paramstr = L"python   " + mypath;
	// TODO: 在此添加命令处理程序代码
	//system("\"C:\\Program Files(x86)\\Microsoft Visual Studio\\Shared\\Python36_64\\python.exe\" E:/数字资产/OpenAIChain/pyAI/图像识别/菜品识别.py");
	//CString paramstr = L"python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\菜品识别.py";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}
}


void COpenAIChainDataUseView::OnButton10()
{
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\菜品识别.py";
	CString paramstr = L"python   " + mypath;
	// TODO: 在此添加命令处理程序代码
	//system("\"C:\\Program Files(x86)\\Microsoft Visual Studio\\Shared\\Python36_64\\python.exe\" E:/数字资产/OpenAIChain/pyAI/图像识别/菜品识别.py");
	//CString paramstr = L"python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\菜品识别.py";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}
}


void COpenAIChainDataUseView::OnButton11()
{
	// TODO: 在此添加命令处理程序代码
	//system("\"C:\\Program Files(x86)\\Microsoft Visual Studio\\Shared\\Python36_64\\python.exe\" E:/数字资产/OpenAIChain/pyAI/图像识别/汽车识别.py");
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\汽车识别.py";
	CString paramstr = L"python   " + mypath;
	
	//CString paramstr = L"python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\汽车识别.py";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}
}


void COpenAIChainDataUseView::OnButton12()
{
	// TODO: 在此添加命令处理程序代码
	//system("\"C:\\Program Files(x86)\\Microsoft Visual Studio\\Shared\\Python36_64\\python.exe\" E:/数字资产/OpenAIChain/pyAI/图像识别/品牌识别.py");
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\通用识别.py";
	CString paramstr = L"python   "+ mypath;
	//CString paramstr = L"python    E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\Release\\通用识别.py";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}
}





void COpenAIChainDataUseView::OnButton201()
{
	// TODO: 在此添加命令处理程序代码
	// TODO: 在此添加命令处理程序代码
	// TODO: 在此添加命令处理程序代码
	//system("\"C:\\Program Files(x86)\\Microsoft Visual Studio\\Shared\\Python36_64\\python.exe\" E:/数字资产/OpenAIChain/pyAI/图像识别/品牌识别.py");
	CString paramstr = L"E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\chess.exe";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}
}


void COpenAIChainDataUseView::OnButton301()
{
	// TODO: 在此添加命令处理程序代码
	CString paramstr = L"E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Use\\renju.exe";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}
}


void COpenAIChainDataUseView::OnButton20()
{
	// TODO: 在此添加命令处理程序代码
	// TODO: 在此添加命令处理程序代码
	// TODO: 在此添加命令处理程序代码
	// TODO: 在此添加命令处理程序代码
	//system("\"C:\\Program Files(x86)\\Microsoft Visual Studio\\Shared\\Python36_64\\python.exe\" E:/数字资产/OpenAIChain/pyAI/图像识别/品牌识别.py");
	CString paramstr = L"chess.exe";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}
}


void COpenAIChainDataUseView::OnButton21()
{
	// TODO: 在此添加命令处理程序代码
	// TODO: 在此添加命令处理程序代码
	CString paramstr = L"renju.exe";
	//STARTUPINFO si = { sizeof(si) };
	STARTUPINFO si;      //隐藏进程窗口
	si.cb = sizeof(STARTUPINFO);
	si.lpReserved = NULL;
	si.lpDesktop = NULL;
	si.lpTitle = NULL;
	si.dwFlags = STARTF_USESHOWWINDOW;
	si.wShowWindow = SW_HIDE;
	si.cbReserved2 = NULL;
	si.lpReserved2 = NULL;
	si.wShowWindow = SW_HIDE;
	PROCESS_INFORMATION pi;

	//创建线程
	BOOL fRet1 = CreateProcess(NULL, paramstr.GetBuffer(), NULL, NULL, FALSE, NORMAL_PRIORITY_CLASS, NULL, NULL, &si, &pi);
	if (fRet1 == TRUE)
	{
		WaitForSingleObject(pi.hThread, INFINITE);
		CloseHandle(pi.hThread);
		CloseHandle(pi.hProcess);
	}
}
