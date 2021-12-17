#include <iostream>
#include <conio.h>

using namespace std;

#include "Thuvien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	int menu,
		soMenu = 13;
	String a;
	do
	{
		system("CLS");
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a);
	} while (menu > 0);
}