#include <iostream>
#include <math.h>

using namespace std;

double TinhCanhBen(int dayLon, int dayBe, int chieuCao);
double TinhChuVi(int dayLon, int dayBe, double canhBen);
double TinhDienTich(int dayLon, int dayBe, int chieuCao);

int main()
{
	int a, b, h;
	double canhBen, chuVi, dienTich;
	cout << "Nhap vao do dai day lon : ";
	cin >> a;
	cout << "Nhap vao do dai day be : ";
	cin >> b;
	cout << "Nhap vao chieu cao : ";
	cin >> h;
	canhBen = TinhCanhBen(a, b, h);
	chuVi = TinhChuVi(a, b, canhBen);
	dienTich = TinhDienTich(a, b, h);
	cout << "Hinh thang co chu vi = "
		<< chuVi
		<< " va dien tich = "
		<< dienTich;
	return 0;
}

double TinhCanhBen(int dayLon, int dayBe, int chieuCao)
{
	double cb;
	cb = sqrt(pow(((double)(dayLon-dayBe)/2),2)+pow((double)chieuCao,2));
	return cb;
}

double TinhChuVi(int dayLon, int dayBe, double canhBen)
{
	double cv;
	cv = dayLon+dayBe+2*canhBen;
	return cv;
}

double TinhDienTich(int dayLon, int dayBe, int chieuCao)
{
	double dt;
	dt = ((dayLon+dayBe)*chieuCao)/2;
	return dt;
}