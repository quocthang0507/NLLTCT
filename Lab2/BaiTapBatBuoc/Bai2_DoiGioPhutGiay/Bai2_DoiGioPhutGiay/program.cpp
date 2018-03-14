#include <iostream>

using namespace std;

#define MAX 3600
#define SIXTY 60

void DoiThoiGian(unsigned int n);

int main()
{
	int soGiay;
	cout << "Nhap so giay can quy doi : ";
	cin >> soGiay;
	DoiThoiGian (soGiay);
	return 0;
}

void DoiThoiGian(unsigned int n)
{
	int gio, phut, giay;
	gio=n/MAX;
	phut=(n%MAX)/SIXTY;
	giay=(n%MAX)%SIXTY;
	cout << "Ket qua : "
		<< gio << ":"
		<< phut << ":"
		<< giay << endl;
}