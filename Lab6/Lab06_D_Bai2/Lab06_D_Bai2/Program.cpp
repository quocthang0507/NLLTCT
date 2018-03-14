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
	int soMenu = 8,menu, m = 0,n=0; 
	int a[SIZE][SIZE];
	do
	{
	menu = ChonMenu(soMenu);
	XuLyMenu(menu,a,m,n);
	}
	while (menu > 0);
}