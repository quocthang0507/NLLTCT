#include<iostream>
#include<conio.h>
//#include<math.h>

using namespace std;

#define		MAX		3600
#define		SIXTY	60

int main()
{
	int n, gio, phut, giay;
	cout << "Nhap vao giay can quy doi : ";
	cin >> n;
	gio=n/MAX;
	phut=(n%MAX)/SIXTY;
	giay=(n%MAX)%SIXTY;
	cout << "Ket qua : "
		<< gio << ":"
		<< phut << ":"
		<< giay << endl;
	return 0;
}