#include <iostream>
#include <math.h>

using namespace std;

double TinhChiSoBMI (double khoiLuong, double chieuCao);

int main()
{
	double w, h, chiSo;
	cout << "Nhap vao khoi luong cua co the (kg) : ";
	cin >> w;
	cout << "Nhap vao chieu cao cua nguoi do (m) : ";
	cin >> h;
	chiSo=TinhChiSoBMI(w,h);
	cout << "Nguoi do co chi so khoi co the la : " << chiSo;
	return 0;
}

double TinhChiSoBMI (double khoiLuong, double chieuCao)
{
	double BMI;
	BMI=khoiLuong/pow(chieuCao,2);
	return BMI;
}