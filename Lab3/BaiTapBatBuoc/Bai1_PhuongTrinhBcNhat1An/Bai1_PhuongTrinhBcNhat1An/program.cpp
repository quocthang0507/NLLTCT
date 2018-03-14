#include <iostream>
#include <conio.h>

using namespace std;

void GiaiPTBacNhat(double a, double b);

int main()
{
	double a, b;
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;
	GiaiPTBacNhat(a, b);
	_getch();
	return 1;
}

void GiaiPTBacNhat(double a, double b)
{
	double nghiem;
	if (a==0 && b==0)
		cout << "Phuong trinh vo so nghiem";
	else
		if (a==0 && b!=0)
			cout << "Phuong trinh vo nghiem";
		else
			if (a!=0)
			{
				nghiem=-b/a;
				cout << "Phuong trinh co nghiem x = "
					<< nghiem << endl;
			}
}
