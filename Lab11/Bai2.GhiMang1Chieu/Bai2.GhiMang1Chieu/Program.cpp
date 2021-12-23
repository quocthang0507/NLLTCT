#include <iostream>
#include <conio.h>
#include <fstream>
#include <time.h>

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
	DaySo a;
	int n;
	char filename[MAX];
	cout << "Nhap ten tap tin can ghi: ";
	cin >> filename;
	NhapTuDong(a, n, 1, 10);
	int kq = Write_Array(a, n, filename);
	if (kq)
	{
		cout << "\nMang da doc tu tap tin: \n";
		Read_Array(filename);
	}
	else
		cout << "\nLoi khi xuat mang vao tap tin!";
}