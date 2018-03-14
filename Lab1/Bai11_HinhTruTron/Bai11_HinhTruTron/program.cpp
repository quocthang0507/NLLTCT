#include<iostream>
#include<math.h>

using namespace std;

#define PI 3.14159

int main()
{
	double r, h,  v, xq, tp, cv, dt;
	cout << "Nhap vao ban kinh mat day r : ";
	cin >> r;
	cout << "Nhap vao chieu cao h : ";
	cin >> h;
	v=4*PI*pow(r,2)*h;
	xq=2*PI*r*h;
	tp=xq+2*PI*pow(r,2);
	cv=2*r*2*PI;
	dt=2*pow(r,2)*PI;
	cout << "Chu vi mat day la : " << cv << endl;
	cout << "Dien tich mat day la : " << dt << endl;
	cout << "Dien tich xung quanh hinh tru la : " << xq << endl;
	cout << "Dien tich toan phan hinh tru la : " << tp << endl;
	cout << "The tich hinh tru la : " << v << endl;
	return 0;
}