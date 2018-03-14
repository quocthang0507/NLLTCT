#include<iostream>

using namespace std;

int main()
{
	float w, h, BMI;
	cout << "Nhap vao khoi luong cua co the (kg) : ";
	cin >> w;
	cout << "Nhap vao chieu cao (m) : ";
	cin >> h;
	BMI=w/pow(h,2);
	cout << "Chi so khoi co the (BMI) bang " << BMI;
	return 0;
}