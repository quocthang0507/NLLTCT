#include <iostream>
#include <math.h>

using namespace std;

double theTich (double banKinh, double chieuCao);
double dienTichXQ (double banKinh, double chieuCao);
double dienTichTP (double dtxq, double banKinh);
double dienTich (double banKinh);
double chuVi (double banKinh);

#define PI 3.1415926

int main()
{
	double r, h, cv, dt, v, dtxq, dttp, p, s;
	cout << "Nhap vao ban kinh mat day : ";
	cin >> r;
	cout << "Nhap vao chieu cao : ";
	cin >> h;
	p=chuVi(r);
	cout << "Chu vi mat day la : " << p << endl;
	s=dienTich(r);
	cout << "Dien tich mat day la : " << s << endl;
	v=theTich(r,h);
	cout << "The tich hinh tru tron la : " << v << endl;
	dtxq=dienTichXQ(r,h);
	cout << "Dien tich xung quanh hinh tru tron la : " << dtxq << endl;
	dttp=dienTichTP(dtxq,r);
	cout << "Dien tich toan phan hinh tru tron la : " << dttp ;
	return 0;
}

double chuVi (double banKinh)
{
	double cv;
	cv=2*banKinh*2*PI;
	return cv;
}

double dienTich (double banKinh)
{
	double dt;
	dt=2*pow(banKinh,2)*PI;
	return dt;
}

double theTich (double banKinh, double chieuCao)
{
	double v;
	v=4*PI*pow(banKinh,2)*chieuCao;
	return v;
}

double dienTichXQ (double banKinh, double chieuCao)
{
	double dtxq;
	dtxq=2*PI*banKinh*chieuCao;
	return dtxq;
}

double dienTichTP (double dtxq, double banKinh)
{
	double dttp;
	dttp=dtxq+2*PI*pow(banKinh,2);
	return dttp;
}