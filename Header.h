#include <sal.h>
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <filesystem>
#include <fstream>
#include <string>
#include <wchar.h>
#include <tchar.h>
#include <random>
#include <sstream>
#include <thread>
#include <Shlwapi.h>
#include <WinUser.h>
#include <ShlObj.h>
#include <tchar.h>
#pragma once
#include <iostream>
#include <string>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#pragma comment (lib, "urlmon.lib")
using namespace std;
RECT rc;
RECT rect;

#undef max
static const char alphanum[] = "0123456789" "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz"; // he has a brain atleast

int stringLength1 = sizeof(alphanum) - 1;

char genRandom1()//char gen in title
{

	return alphanum[rand() % stringLength1];
}
void MakeSexy()
{
	HWND hwnd = GetConsoleWindow();
	DWORD style = GetWindowLong(hwnd, GWL_STYLE);
	style &= ~WS_MAXIMIZEBOX & ~WS_SIZEBOX;
	SetWindowLong(hwnd, GWL_STYLE, style);
	GetWindowRect(hwnd, &rc);
	int xPos = (GetSystemMetrics(SM_CXSCREEN) - rc.right) / 2;
	int yPos = (GetSystemMetrics(SM_CYSCREEN) - rc.bottom) / 2;
	SetWindowPos(hwnd, 0, xPos, yPos, 0, 0, SWP_NOZORDER | SWP_NOSIZE);
}

void SetRandomTitle()//random
{
	srand(time(0));
	std::string Str = "";
	for (unsigned int i = 0; i < 60; ++i)
	{
		Str += genRandom1();

	}

	SetConsoleTitleA(Str.c_str());

}

void SetTitle(_In_ LPCSTR lpConsoleTitle)
{
	SetConsoleTitleA(lpConsoleTitle);
	return;
}

