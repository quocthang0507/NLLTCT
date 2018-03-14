#include <iostream>
#include <math.h>

using namespace std;

double TinhDoCao(double phi, double delta, double h);
double TinhPhuongVi(double phi, double delta, double h, double altitude);

int main()
{
	double phi, delta, h, altitude, azimuth;
	cout << "phi = ";
	cin >> phi;
	cout << "delta = ";
	cin >> delta;
	cout << "h = ";
	cin >> h;
	altitude=TinhDoCao(phi, delta, h);
	azimuth=TinhPhuongVi(phi, delta, h, altitude);
	cout << "Altitude = " << altitude << endl;
	cout << "Azimuth = " << azimuth ;
	return 0;
}

double TinhDoCao(double phi, double delta, double h)
{
	double doCao;
	doCao=asin(sin(phi)*sin(delta)+cos(phi)*cos(delta)*cos(h));
	return doCao;
}

double TinhPhuongVi(double phi, double delta, double h, double altitude)
{
	double phuongVi;
	phuongVi=acos((cos(phi)*sin(delta)-sin(phi)*cos(delta)*cos(h))/cos(altitude));
	return phuongVi;
}