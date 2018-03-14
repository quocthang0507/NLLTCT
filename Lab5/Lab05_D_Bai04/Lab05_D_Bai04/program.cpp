#include <time.h>
#include <stdlib.h>
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
	int a[MAX], b[MAX], c[MAX];
	int i, n = 0, m = 0;
	do
	{
		system("CLS");
		NhapTuDong(a, n);
		Tim_Day_GiaTri_PhanBiet(a, n, b, c, m);
		cout << "\nDay dang xet:\n";
		XuatMang(a, n);
		cout << setiosflags(ios::left);
		cout << endl << setw(20) << "Gia tri Phan Biet"
			<< setw(20) << "So lan xuat hien";
		for (i = 0; i < m; i++)
		{
			cout << endl << setw(20) << b[i]
			<< setw(20) <<c[i];
		}
		cout << "\nNua khong, nhan ESC neu khong!\n";
		kt = _getch();
	} while (kt != 27);
}