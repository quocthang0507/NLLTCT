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
	int soMenu = 8, menu, n=0;
	MaTranVuong a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu,a,n);
	}
	while (menu > 0);
}