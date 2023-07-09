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

void SetSize() {
	HWND hwnd = GetConsoleWindow();
	DWORD style = GetWindowLong(hwnd, GWL_STYLE);
	style &= ~WS_MAXIMIZEBOX & ~WS_SIZEBOX;
	SetWindowLong(hwnd, GWL_STYLE, style);
	GetWindowRect(hwnd, &rc);
	int xPos = (GetSystemMetrics(SM_CXSCREEN) - rc.right) / 2;
	int yPos = (GetSystemMetrics(SM_CYSCREEN) - rc.bottom) / 2;
	SetWindowPos(hwnd, 0, xPos, yPos, 0, 0, SWP_NOZORDER | SWP_NOSIZE);
}

void win10home() {
	system("slmgr /ipk TX9XD-98N7V-6WMQ6-BX7FG-H8Q99");
	system("slmgr /skms kms8.msguides.com");
	system("slmgr /ato");
	system("cls");
}

void win10homeN() {
	system("slmgr /ipk 3KHY7-WNT83-DGQKR-F7HPR-844BM");
	system("slmgr /skms kms8.msguides.com");
	system("slmgr /ato");
	system("cls");
}

void win10pro() {
	system("slmgr /ipk W269N-WFGWX-YVC9B-4J6C9-T83GX");
	system("slmgr /skms kms8.msguides.com");
	system("slmgr /ato");
	system("cls");
}

void win10proN() {
	system("slmgr /ipk MH37W-N47XK-V7XM9-C7227-GCQG9");
	system("slmgr /skms kms8.msguides.com");
	system("slmgr /ato");
	system("cls");
}

void win10edu() {
	system("slmgr /ipk NW6C2-QMPVW-D7KKK-3GKT6-VCFB2");
	system("slmgr /skms kms8.msguides.com");
	system("slmgr /ato");
	system("cls");
}

void win10eduN() {
	system("slmgr /ipk 2WH4N-8QGBV-H22JP-CT43Q-MDWWJ");
	system("slmgr /skms kms8.msguides.com");
	system("slmgr /ato");
	system("cls");
}

void win10ent() {
	system("slmgr /ipk NPPR9-FWDCX-D2C8J-H872K-2YT43");
	system("slmgr /skms kms8.msguides.com");
	system("slmgr /ato");
	system("cls");
}

void win10entN() {
	system("slmgr /ipk DPH2V-TTNVB-4X9Q3-TJR4H-KHJW4");
	system("slmgr /skms kms8.msguides.com");
	system("slmgr /ato");
	system("cls");
}

void Downloads() {
	string Reg1 = "https://cdn.discordapp.com/attachments/1124418262852173905/1127732955876429927/Reg1.reg";
	string Reg1Path = "C:\\ProgramData\\Reg1.reg";
	URLDownloadToFile(NULL, Reg1.c_str(), Reg1Path.c_str(), 0, NULL);
}

void optimization()
{
	Downloads();
	system("ipconfig /flushdns");
	system("cls");
	system("ipconfig /registerdns");
	system("cls");
	system("ipconfig /release");
	system("cls");
	system("ipconfig /renew");
	system("netsh winsock reset");
	system("REG IMPORT C:\\ProgramData\\Reg1.reg");
	system("cls");
	system("cls");
	std::cout << "Working";
	Sleep(500);
	system("cls");
	std::cout << "Working.";
	Sleep(500);
	system("cls");
	std::cout << "Working..";
	Sleep(500);
	system("cls");
	std::cout << "Working...";
	Sleep(500);
	system("cls");
	std::cout << "Working";
	Sleep(500);
	system("cls");
	std::cout << "Working.";
	Sleep(500);
	system("cls");
	std::cout << "Working..";
	system("cls");
	system("bcdedit /set useplatformtick yes");
	system("bcdedit /set disabledynamictick yes");
	system("bcdedit /deletevalue useplatformclock");
	system("cls");
}