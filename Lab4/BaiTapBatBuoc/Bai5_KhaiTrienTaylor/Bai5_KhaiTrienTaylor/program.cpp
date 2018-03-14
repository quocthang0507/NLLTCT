#include <conio.h>
#include <iostream>

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
	int menu, soMenu = 3;
	double n;
	cout << endl << "Nhap x (degree) = ";
	cin >> n;
	do
	{
		menu = ChonMenu(soMenu);
		XuLyMenu(menu,n);
	}
	while (menu > 0);
}