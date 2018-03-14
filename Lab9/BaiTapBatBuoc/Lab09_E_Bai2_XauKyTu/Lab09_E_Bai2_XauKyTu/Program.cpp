#include <iostream>
#include <conio.h>
#include <string.h>

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
	int menu, soMenu=9, n=0;
	ChuoiDong s;
	s=new char [MAX];
	do
	{
		menu=ChonMenu(soMenu);
		XuLyMenu(menu,s);
	}
	while (menu>0);
}