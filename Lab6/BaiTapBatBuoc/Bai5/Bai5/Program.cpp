#include <iostream>
#include <conio.h>
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
	char kt;
	do
	{
		system("CLS");
		int id1 = ChonTienTe();
		int id2 = ChonTienTe();
		double giaTri1, giaTri2;
		cout << "Nhap gia tri: ";
		cin >> giaTri1;
		giaTri2 = DoiTienTe(id1, giaTri1, id2);
		cout << giaTri1 << " " << TienTe[id1] << " bang " << giaTri2 << " " << TienTe[id2];
		cout << "\n\nNhan ESC de THOAT, nhan phim bat ky de TIEP TUC!";
		kt = _getch();
	} while (kt != 27);
}