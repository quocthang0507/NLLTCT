#include <iostream>
#include <conio.h>
#include <iomanip>

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
	TaiLieu *a;
	a=new TaiLieu[MAX];
	do
	{
		menu=ChonMenu(soMenu);
		XuLyMenu(menu,a,n);
	}
	while (menu>0);
}