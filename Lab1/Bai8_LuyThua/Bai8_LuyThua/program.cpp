#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float x, y;
	int n;
	cout << "Nhap so thuc x : ";
	cin >> x;
	cout << "Nhap so thuc y : ";
	cin >> y;
	cout << "Nhap so nguyen n : ";
	cin >> n;
	cout << "x^n + y^n = " << pow(x,n)+pow(y,n) << endl;
	return 0;
}