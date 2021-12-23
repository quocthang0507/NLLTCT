#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

#include "ThuVien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	_getch();
	return 0;
}

void ChayChuongTrinh()
{
	char filename[MAX];
	DaySo a;
	int n;
	cout << "Nhap ten tap tin: ";
	cin >> filename;
	Read_Array(filename, a, n);
	cout << "\nMang da doc tu tap tin:\n";
	XuatMang(a, n);
}