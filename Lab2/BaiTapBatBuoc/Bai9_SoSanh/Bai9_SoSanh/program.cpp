#include <iostream>

using namespace std;

double TimMax(double x, double y);
double TimMax4(double a, double b, double c, double d);

int main()
{
	double a, b, c, d, Max;
	cout << "Nhap vao gia tri cho a = ";
	cin >> a;
	cout << "Nhap vao gia tri cho b = ";
	cin >> b;
	cout << "Nhap vao gia tri cho c = ";
	cin >> c;
	cout << "Nhap vao gia tri cho d = ";
	cin >> d;
	Max=TimMax4(a, b, c, d);
	cout << "So lon nhat trong 4 so da nhap la : " << Max;
	return 0;
}

double TimMax(double x, double y)
{
	double MAX;
	MAX=x>=y?x:y;
	return MAX;
}

double TimMax4(double a, double b, double c, double d)
{
	double Max1, Max2, Max4;
	Max1=TimMax(a,b);
	Max2=TimMax(c,d);
	Max4=TimMax(Max1,Max2);
	return Max4;
}