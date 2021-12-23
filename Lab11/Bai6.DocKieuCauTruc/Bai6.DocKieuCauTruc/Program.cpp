#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>

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
	int n;
	NhanVien ds[MAX];
	char filename[MAX];
	cout << "Nhap ten tap tin de mo: ";
	cin >> filename;
	if (Doc_CauTruc(filename, ds, n))
	{
		cout << "\nDu lieu tu tap tin: \n";
		Xuat_NV(ds, n);
	}
	else
		cout << "\nLoi khi doc du lieu tu tap tin!";
}