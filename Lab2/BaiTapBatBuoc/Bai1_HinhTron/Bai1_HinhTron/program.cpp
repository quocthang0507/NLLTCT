#include <iostream>

using namespace std;

#define PI 3.1415926

double TinhChuViHinhTron(double r);
double TinhDienTichHinhTron(double r);

int main()
{
	double r, chuVi, dienTich;
	cout << "Nhap do dai ban kinh r = ";
	cin >> r;
	chuVi = TinhChuViHinhTron(r);
	dienTich = TinhDienTichHinhTron(r);
	cout << "Hinh tron ban kinh r = " << r
		<< " co chu vi " << chuVi
		<< " va dien tich " << dienTich;
	return 0;
}

double TinhChuViHinhTron(double r)
{
	double cv;
	cv = r*2*PI;
	return cv;
}

double TinhDienTichHinhTron(double r)
{
	double dt;
	dt = r*r*PI;
	return dt;
}