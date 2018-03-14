#include <iostream>
#include <conio.h>

using namespace std;

void ThongBao(int loaiTg, double a, double b, double c);
int PhanLoaiTamGiac(double a, double b, double c);

int main()
{
	double a, b, c;
	cout << endl << "Nhap do dai canh a : ";
	cin >> a;
	cout << endl << "Nhap do dai canh b : ";
	cin >> b;
	cout << endl << "Nhap do dai canh c : ";
	cin >> c;
	int ketQua = PhanLoaiTamGiac(a, b, c);
	ThongBao(ketQua, a, b, c);
	_getch();
	return 1;
}

int PhanLoaiTamGiac(double a, double b, double c)
{
	int kq = 0;
	if (a + b > c || a + c > b || b + c > a)
	{
		if (a == b && b == c)
		kq = 1;
		else
			if (a == b || b == c || a == c)
			{
				if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
					kq = 4;
				else
					kq = 2;
			}
			else
				if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
					kq = 3;
				else
					kq = 5;
	}
	return kq;
}

void ThongBao(int loaiTg, double a, double b, double c)
{
	switch (loaiTg)
	{
		case 0:		
			cout << endl << a << ", " << b << ", " << c
				<< " khong phai la 3 canh cua 1 tam giac";
			break;
		case 1: 
			cout << endl << a << ", " << b << ", " << c
				<< " la do dai 3 canh cua 1 tam giac deu";
			break;
		case 2: 
			cout << endl << a << ", " << b << ", " << c
				<< " la do dai 3 canh cua 1 tam giac can";
			break;
		case 3: 
			cout << endl << a << ", " << b << ", " << c
				<< " la do dai 3 canh cua 1 tam giac vuong";
			break;
		case 4: 
			cout << endl << a << ", " << b << ", " << c
				<< " la do dai 3 canh cua 1 tam giac vuong can";
			break;
		case 5: 
			cout << endl << a << ", " << b << ", " << c
				<< " la do dai 3 canh cua 1 tam giac thuong";
			break;
	}
}