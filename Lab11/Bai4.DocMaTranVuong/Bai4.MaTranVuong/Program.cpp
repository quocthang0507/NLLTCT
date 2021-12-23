#include <iostream>
#include <conio.h>
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
	MaTranVuong a;
	int n;
	cout << "\nNhap ten tap tin de mo: ";
	cin >> filename;
	if (Read_Matrix(filename, a, n))
		XuatMaTran(a, n);
	else
		cout << "\nLoi khi doc ma tran tu tap tin!";
}