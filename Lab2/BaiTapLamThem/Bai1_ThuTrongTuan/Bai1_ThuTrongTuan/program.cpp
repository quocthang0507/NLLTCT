#include <iostream>

using namespace std;

int ThuTrongTuan (int d, int m, int y);

int main()
{
	int d, m, y, thu;
	cout << "Nhap vao ngay : ";
	cin >> d;
	cout << "Nhap vao thang : ";
	cin >> m;
	cout << "Nhap vao nam : ";
	cin >> y;
	thu=ThuTrongTuan(d, m, y);
	cout << "Ngay " << d << "/" << m << "/" << y << " la thu " << thu+1;
	return 0;
}

int ThuTrongTuan (int d, int m, int y)
{
	int t, x, k, w;
	t = y - (14 - m)/12;
	x = t + t/4 - t/100 +t/400;
	k = m + 12 * ((14 - m) / 12) - 2;
	w = (d + x + (31 * k) / 12) % 7;
	return w;
}