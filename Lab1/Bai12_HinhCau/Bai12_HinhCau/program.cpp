#include<iostream>
#include<math.h>

using namespace std;

#define		PI		3.14159

int main()
{
	float r, v, s;
	cout << "Nhap vao ban kinh hinh cau : ";
	cin >> r;
	v=(4/3)*PI*r*r*r;
	s=4*PI*r*r;
	cout << "Dien tich mat cau la : " << s << endl;
	cout << "The tich khoi cau la : " << v << endl;
	return 0;
}