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
	int Lich[6][7];
	int thang, nam;
	do
	{
		system("CLS");
		cout<< "\nNhap thang = ";
		cin >> thang;
		cout << "\nNhap nam = ";
		cin >> nam;
		int thu=TimThu(thang, nam);
		int ngay=TimSoNgay(thang, nam);
		TaoLich(Lich,thu,ngay);
		cout << "\n===========================================\n";
		cout << "\nLICH THANG " << thang << " / " << nam << "\n\n";
		XuatLich(Lich);
		_getch();
		cout << "\n\nNhan ESC de THOAT, nhan phim bat ky de TIEP TUC!";
		kt=_getch();
	}
	while (kt!=27);
}