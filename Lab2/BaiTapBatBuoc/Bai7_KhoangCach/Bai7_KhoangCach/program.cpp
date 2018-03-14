#include <iostream>
#include <math.h>

using namespace std;

double TinhKhoangCach(double xa, double ya, double xb, double yb);

int main()
{
	double xa, ya, xb, yb, d;
	cout << "Nhap vao toa do diem A = ";
	cin >> xa >> ya;
	cout << "Nhap vao toa do diem B = ";
	cin >> xb >> yb;
	d=TinhKhoangCach( xa, ya, xb, yb);
	cout << "Khoang cach diem "
		<< "A (" << xa << ";" << ya << ")"
		<< " va diem B (" << xb << ";" << yb << ")"
		<< " la d = " << d;
	return 0;
}

double TinhKhoangCach(double xa, double ya, double xb, double yb)
{
	double khoangCach;
	khoangCach=sqrt(pow((xb-xa),2)+pow((yb-ya),2));
	return khoangCach;
}