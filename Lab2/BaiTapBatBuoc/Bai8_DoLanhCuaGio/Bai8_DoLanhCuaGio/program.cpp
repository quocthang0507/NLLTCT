#include <iostream>

using namespace std;

double WindChill(double t, double v);

int main()
{
	double t, v, w;
	cout << "Nhap nhiet do (F) : ";
	cin >> t;
	cout << "Nhap van toc gio (dam/gio) : ";
	cin >> v;
	w=WindChill(t, v);
	cout << "Do lanh cua gio = " << w;
	return 0;
}

double WindChill(double t, double v)
{
	double doLanh;
	doLanh=35.74+0.6215*t+(0.4275*t-35.75)*pow(v, 0.16);
	return doLanh;
}