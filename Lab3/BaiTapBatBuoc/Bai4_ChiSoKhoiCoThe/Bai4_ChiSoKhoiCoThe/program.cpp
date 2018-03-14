#include <iostream>
#include <conio.h>

using namespace std;

void TinhChiSoBMI (double khoiLuong, double chieuCao);

int main()
{
	double w, h;
	cout << "Nhap vao can nang (kg) : ";
	cin >> w;
	cout << "Nhap chieu cao (m) : ";
	cin >> h;
	TinhChiSoBMI(w, h);
	_getch();
	return 1;
}

void TinhChiSoBMI (double khoiLuong, double chieuCao)
{
	double BMI;
	BMI=khoiLuong/pow(chieuCao,2);
	if (BMI<15)
		cout << "Doi khat";
	else
		if (BMI<17.5)
			cout << "Bieng an";
		else
			if (BMI<18.5)
				cout << "Thieu can";
			else
				if (18.5<=BMI && BMI <25)
					cout << "Ly tuong";
				else
					if (25<=BMI && BMI<30)
						cout << "Thua can";
					else
						if (30<=BMI && BMI<40)
							cout << "Beo phi";
						else
							if (BMI>=40)
								cout << "Tre em bi beo phi";
}