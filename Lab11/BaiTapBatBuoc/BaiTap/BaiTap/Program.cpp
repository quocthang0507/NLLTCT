#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>

using namespace std;

#include "ThuVien.h"
#include "Menu.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 0;
}

void ChayChuongTrinh()
{
	int soMenu = 2, menu;
	DaySo a; int kt_a;
	DanhSach ds; int kt_ds;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu, a, ds, kt_a, kt_ds);
	} while (menu > 0);
}