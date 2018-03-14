#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float a, b, h, p, canhBen, chuVi, dienTich;
	cout <<"Nhap vao do dai day lon : ";
	cin >> a;
	cout <<"Nhap vao do dai day be : ";
	cin >> b;
	cout <<"Nhap vao chieu cao : ";
	cin >> h;
	p=(a-b)/2;
	canhBen=sqrt(p*p+h*h);
	chuVi=a+b+2*canhBen;
	dienTich=((a+b)*h)/2;
	cout <<"Chu vi cua hinh thang can la : " << chuVi << endl;
	cout <<"Dien tich cua hinh thang can la : " << dienTich << endl;
	return 0;
}