#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>

using namespace std;

#include "Thuvien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	return 1;
}

void ChayChuongTrinh()
{
	char thoat;
	ChuoiKySo a;
	do
	{
		system("CLS");
		cout << endl << "Nhap vao chuoi so a = ";
		gets_s(a, MAX);
		cout << endl << "Gia tri so moi : " << ChuyenDoi(a);
		cout << endl << "\nNua khong ? go ESC neu khong\n";
		thoat = _getch();
	} while (thoat != 27);
}