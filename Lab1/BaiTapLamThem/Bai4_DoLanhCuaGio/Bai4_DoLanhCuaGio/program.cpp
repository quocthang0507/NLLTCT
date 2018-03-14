#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float t, v, w;
	do
	{
		cout << "Nhap nhiet do (don vi Fahrenheit) trong khoang tu -50 den 50 : ";
		cin >> t;
	}
	while (t>50 || t<-50);
	do
	{
		cout << "Nhap van toc gio (don vi dam/gio) trong khoang tu 3 den 120 : ";
		cin >> v;
	}
	while (v>120 || v<3);
	w = 35.74 + 0.6215 * t + (0.4275*t-35.75)* pow(v,0.16f);
	cout << "Do lanh cua gio la " << w << endl;
	return 0;
}