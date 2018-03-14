#include <iostream>

using namespace std;

double TienLai(long m, double l);

int main()
{
	long m;
	double l, tienLai;
	cout << "Nhap vao so tien : ";
	cin >> m;
	cout << "Nhap vao lai suat %/thang : ";
	cin >> l;
	tienLai=TienLai(m, l);
	cout << "So tien lai phai tra hang thang la : " << tienLai;
	return 0;
}

double TienLai(long m, double l)
{
	double lai;
	lai=m*l/100;
	return lai;
}