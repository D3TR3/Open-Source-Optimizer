
#include <iostream>
#include <Windows.h>
#include "Header.h"
using namespace std;
int choice;
int choice2;
bool shouldExit = false;

void OptimizerTitle() {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
	inline void setcolor(int textcol, int backcol);
	std::string raw_str = R"(
	 ______  ______  _________ ________ ___ __ __   ________   ______ ______  ______   
	/_____/\/_____/\/________//_______//__//_//_/\ /_______/\ /_____//_____/\/_____/\
	\:::_ \ \:::_ \ \__.::.__\\__.::._\\::\| \| \ \\__.::._\/ \:::__\\::::_\/\:::_ \ \
	 \:\ \ \ \:(_) \ \ \::\ \    \::\ \ \:.      \ \  \::\ \     /: / \:\/___/\:(_) ) )_
	  \:\ \ \ \: ___\/  \::\ \   _\::\ \_\:.\-/\  \ \ _\::\ \__ /::/___\::___\/\: __ `\ \
	   \:\_\ \ \ \ \     \::\ \ /__\::\__/\. \  \  \ /__\::\__//_:/____/\:\____/\ \ `\ \ \
	    \_____\/\_\/      \__\/ \________\/\__\/ \__\\________\\_______\/\_____\/\_\/ \_\/

						Made by D3TR3

		    1. Optimizer(pending)				2. Activator

	        				   3. Exit

>>>
)";
	std::cout << raw_str;
}

void ActivationTitle() {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, FOREGROUND_BLUE);
	inline void setcolor(int textcol, int backcol);
	std::string raw_str = R"(
	 ________  ______ _________ ________ __   __  ________  _________ ______  ______
	/_______/\/_____//________//_______//_/\ /_/\/_______/\/________//_____/\/_____/\
	\::: _  \ \:::__\\__.::.__\\__.::._\\:\ \\ \ \::: _  \ \__.::.__\\:::_ \ \:::_ \ \
	 \::(_)  \ \:\ \  __\::\ \    \::\ \ \:\ \\ \ \::(_)  \ \ \::\ \  \:\ \ \ \:(_) ) )_
	  \:: __  \ \:\ \/_/\\::\ \   _\::\ \_\:\_/.:\ \:: __  \ \ \::\ \  \:\ \ \ \: __ `\ \
	   \:.\ \  \ \:\_\ \ \\::\ \ /__\::\__/\ ..::/ /\:.\ \  \ \ \::\ \  \:\_\ \ \ \ `\ \ \
	    \__\/\__\/\_____\/ \__\/ \________\/\___/_(  \__\/\__\/  \__\/   \_____\/\_\/ \_\/

					Check your Windows Version!!! 
				
	1. Windows 10/11 Home						5. Windows 10/11 Education
	2. Windows 10/11 Home N						6. Windows 10/11 Education N
	3. Windows 10/11 Professional					7. Windows 10/11 Enterprise
	4. Windows 10/11 Professional N					8. Windows 10/11 Enterprise N

	9. Back
				Using https://msguides.com/windows-10 as KMS server
>>>
)";
	std::cout << raw_str;
}
int main() {
	SetSize();
	while (!shouldExit) {
		OptimizerTitle();
		cin >> choice;
		if (choice == 1) {
			optimization();
		}
		else if (choice == 2) {
			system("cls");
			system("msinfo32");
			while (!shouldExit) {
				ActivationTitle();
				cin >> choice2;
				if (choice2 == 1) {
					win10home();
				}
				else if (choice2 == 2) {
					win10homeN();
				}
				else if (choice2 == 3) {
					win10pro();
				}
				else if (choice2 == 4) {
					win10proN();
				}
				else if (choice2 == 5) {
					win10edu();
				}
				else if (choice2 == 6) {
					win10eduN();
				}
				else if (choice2 == 7) {
					win10ent();
				}
				else if (choice2 == 8) {
					win10entN();
				}
				else if (choice2 == 9) {
					system("cls");
					break;
				}
				else if (choice2 >= 9) {
					system("cls");
				}
			}
		}
		else if (choice == 3) {
			break;
		}
		else if (choice >= 4) {
			system("cls");
		}
	}
}