#include <iostream>

using namespace std;

int TinhTong (unsigned int n);

int main()
{
	int ketQua = 0;
	ketQua = TinhTong(50);
	cout << endl << "1 + 2 + ... + 50 = " << ketQua;
	unsigned int m;
	cout << endl << "Nhap mot so nguyen khong am : ";
	cin >> m;
	ketQua = TinhTong(m);
	cout << endl << "1 + 2 + ... + " << m << " = " << ketQua;
	return 0;
}

int TinhTong (unsigned int n)
{
	int sum = 0;
	sum = n * (n+1) /2;
	return sum;
}