#include <iostream>
#include <conio.h>
#include <time.h>

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
	int soMenu = 6, menu, n=0;
	DaySo a;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(a,menu,n);
	}
	while (menu > 0);
}