#include <iostream>

using namespace std;

void NhietDo(double t);

int main()
{
	double t;
	cout << "Nhap vao nhiet do celcius : ";
	cin >> t;
	NhietDo(t);
	return 0;
}

void NhietDo(double t)
{
	double f, k, r;
	f = t * 9 / 5 + 32;
	k = t + 273.15;
	r = (t + 273.15) * 9 / 5;
	cout << t << " do C \n"
		<< "<=> " << f << " do F \n"
		<< "<=> " << k << " do K \n"
		<< "<=> " << r << " do R \n";
}