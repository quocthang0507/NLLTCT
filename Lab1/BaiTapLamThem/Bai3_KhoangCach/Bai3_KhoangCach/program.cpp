#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	float x1, y1, x2, y2, d;
	cout << "Nhap toa do diem A(x1;y1) = ";
	cin >> x1 >> y1;
	cout << "Nhap toa do diem B(x2;y2) = ";
	cin >> x2 >> y2;
	d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	cout << "Khoang cach cua 2 diem A va B la : " << d << endl;
	return 0;
}