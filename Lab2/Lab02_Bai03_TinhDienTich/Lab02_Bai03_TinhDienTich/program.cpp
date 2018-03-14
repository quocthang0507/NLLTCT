#include <iostream>
#include <math.h>

using namespace std;

int TinhDienTichHCN(int dai, int rong);
double TinhDienTichTamGiac (int canhA, int canhB, int canhC);

int main()
{
	int a, b, c;
	double dienTich;
	cout << "Nhap do dai canh a : ";
	cin >> a;
	cout << "Nhap do dai canh b : ";
	cin >> b;
	cout << "Nhap do dai canh c : ";
	cin >> c;
	dienTich=TinhDienTichHCN(a, b);
	cout << endl << "Dien tich hinh chu nhat co "
		<< "chieu dai " << a << " va "
		<< "chieu rong " << b << " la "
		<< dienTich;
	dienTich = TinhDienTichTamGiac(a, b, c);
	cout << endl << "Dien tich cua hinh tam giac co "
		<< "3 canh : a = " << a << ", "
		<< "b = " << b << ", c = " << c << " la "
		<< dienTich;
	return 0;
}

int TinhDienTichHCN(int dai, int rong)
{
	int dt;
	dt = dai * rong;
	return dt;
}

double TinhDienTichTamGiac (int canhA, int canhB, int canhC)
{
	double dt, p;
	p=(canhA + canhB + canhC) / 2.0;
	dt = sqrt(p*(p-canhA)*(p-canhB)*(p-canhC));
	return dt;
}