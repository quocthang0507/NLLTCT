#include <iostream>>

using namespace std;

#include "ThuVien.h"

int main()
{
	DaySo a;
	int k;
	NhapDayPhanBiet(a, MAX);
	cout << "\nDay so hien tai: \n";
	XuatDaySo(a, MAX);
	do {
		cout << "\nNhap so phan tu hoan vi k = ";
		cin >> k;
	} while (k > MAX || k < 0);
	LietKe_HoanVi(a, MAX, k);
	return 1;
}