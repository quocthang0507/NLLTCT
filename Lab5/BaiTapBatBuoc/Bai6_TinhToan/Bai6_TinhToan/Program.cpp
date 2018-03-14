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
	int menu, soMenu=6;
	int n=0;
	DaySo a;
	cout << endl << "Nhap kich thuoc mang : ";
	cin >> n;
	NhapMang(a, n);
	do
	{
		menu=ChonMenu(soMenu);
		XuLyMenu(menu, a, n);
	}
	while (menu>0);
}