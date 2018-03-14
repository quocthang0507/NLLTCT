#include <iostream>
#include <conio.h>

using namespace std;

int TinhTong(unsigned int n);
int TinhGiaiThua(unsigned int n);

int main()
{
	unsigned int n;
	cout << endl << "Nhap mot so nguyen khong am : ";
	cin >> n;
	long ketQua;
	ketQua = TinhGiaiThua(n);
	cout << endl << n << "! = " << ketQua;
	ketQua = TinhTong(n);
	cout << endl << "1 + 2 + ... + n = " << ketQua;
	_getch();
	return 1;
}

int TinhGiaiThua(unsigned int n)
{
	int kq;
	if (n < 2)
		return 1;
	else
	{
		kq = 1;
		for (int i=2; i<=n; i++)
			kq *= i;
		return kq;
	}
}

int TinhTong(unsigned int n)
{
	int sum = 0;
	for (int i=1; i<=n; i++)
		sum += i;
	return sum;
}