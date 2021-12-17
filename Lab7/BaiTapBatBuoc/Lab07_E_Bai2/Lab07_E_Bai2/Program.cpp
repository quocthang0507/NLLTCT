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
	SoTuNhienLon m, n, t;
	do
	{
		system("CLS");
		cout << endl << "Nhap vao so tu nhien lon m = ";
		cin >> m;
		cout << endl << "Nhap vao so tu nhien lon n = ";
		cin >> n;
		CongSoTuNhienLon(m, n, t);

		int lm = strlen(m), ln = strlen(n), lt = strlen(t);
		int max = TimMax_3_So(lm, ln, lt);

		cout << endl << "Bai giai : \n";
		cout << std::right
			<< endl << setw(5) << ' ' << "  " << setw(max) << m
			<< endl << setw(5) << ' ' << "+ " << setw(max) << n
			<< endl << setw(5) << ' ' << string(max + 3, '_')
			<< endl << setw(5) << ' ' << "= " << setw(max) << t
			<< endl << "\nNua khong ? go ESC neu khong\n";
		thoat = _getch();
	} while (thoat != 27);
}