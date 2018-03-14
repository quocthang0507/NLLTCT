#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int a, b, c;
	float p, chuVi, dienTich;
	cout << "Nhap do dai canh thu nhat = ";
	cin >> a;
	cout << "Nhap do dai canh thu hai = ";
	cin >> b;
	cout << "Nhap do dai canh thu ba = ";
	cin >> c;
	chuVi = a+b+c;
	p = chuVi/2.0;
	dienTich = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << "Chu vi cua tam giac la " << chuVi << endl;
	cout << "Dien tich cua tam giac la " << dienTich << endl;
	return 0;
}