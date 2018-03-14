#include <iostream>
#include <conio.h>

using namespace std;

int TimSoNgay(int thang, int nam);
int NhapSoTrongMien(int min, int max);

int main()
{
	int soNgay, thang, nam;
	cout << endl << "Nhap mot thang trong nam";
	thang = NhapSoTrongMien(1, 12);
	cout << endl << "Nhap nam duong lich";
	nam = NhapSoTrongMien(1, 3000);
	soNgay = TimSoNgay(thang, nam);
	cout << endl << "Thang " << thang
		<< " nam " << nam
		<< " co " << soNgay << " ngay.";
	_getch();
	return 1;
}

int NhapSoTrongMien(int min, int max)
{
	int so;
	do
	{
		cout << endl << "Nhap mot so trong doan ["
			<< min << ".." << max << "] : ";
		cin >> so;
	}
	while (so < min || so > max);
	return so;
}

int TimSoNgay(int thang, int nam)
{
	int soNgay;
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
		soNgay=31;
	else
		if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
			soNgay=30;
		else
			if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
				soNgay = 29;
			else
				soNgay = 28;
	return soNgay;
}