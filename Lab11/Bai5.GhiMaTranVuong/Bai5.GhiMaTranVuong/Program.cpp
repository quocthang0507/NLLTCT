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
	char filename[MAX];
	MaTranVuong a;
	int n;
	cout << "Nhap ten tap tin de ghi: ";
	cin >> filename;
	NhapTuDong(a, n, 0, 9);
	if (Ghi_MaTran(filename, a, n))
	{
		cout << "\nMa tran doc tu tap tin: \n";
		Xuat_MaTran(filename);
	}
	else
		cout << "\nLoi khi ghi ma tran vao tap tin!";
}