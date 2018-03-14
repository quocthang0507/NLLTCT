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
	int menu, soMenu=4;
	do
	{
		menu=ChonMenu(soMenu);
		XuLyMenu(menu);
	}
	while (menu > 0);
	_getch();
}