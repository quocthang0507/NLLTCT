#include <iostream>
#include <conio.h>

using namespace std;

unsigned short NhapDiem(int stt);
void ThongKe(unsigned int n);

int main()
{
	unsigned int n;
	cout << endl << "Nhap so luong sinh vien : ";
	cin >> n;
	ThongKe(n);
	_getch();
	return 1;
}

unsigned short NhapDiem(int stt)
{
	unsigned short diem;
	do
	{
		cout << endl << "Nhap diem cua SV thu " << stt << " : ";
		cin >> diem;
	}
	while (diem < 0 || diem > 10);
	return diem;
}

void ThongKe(unsigned int n)
{
	int d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0,
		d6 = 0, d7 = 0, d8 = 0, d9 = 0, d10 = 0;
	unsigned short diem;
	for (int i=0; i<n; i++)
	{
		diem = NhapDiem(i + 1);
		switch(diem)
		{
			case 10: d10++;
			case 9: d9++;
			case 8: d8++;
			case 7: d7++;
			case 6: d6++;
			case 5: d5++;
			case 4: d4++;
			case 3: d3++;
			case 2: d2++;
			case 1: d1++;
			case 0: d0++;
		}
	}
	cout << endl << "So SV co diem >= 0 : " << d0;
	cout << endl << "So SV co diem >= 1 : " << d1;
	cout << endl << "So SV co diem >= 2 : " << d2;
	cout << endl << "So SV co diem >= 3 : " << d3;
	cout << endl << "So SV co diem >= 4 : " << d4;
	cout << endl << "So SV co diem >= 5 : " << d5;
	cout << endl << "So SV co diem >= 6 : " << d6;
	cout << endl << "So SV co diem >= 7 : " << d7;
	cout << endl << "So SV co diem >= 8 : " << d8;
	cout << endl << "So SV co diem >= 9 : " << d9;
	cout << endl << "So SV co diem >= 10 : " << d10;
}