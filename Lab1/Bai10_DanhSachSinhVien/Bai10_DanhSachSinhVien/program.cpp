#include<iostream>
#include<iomanip>
#include <conio.h>

using namespace std;

int main()
{
	cout << setiosflags(ios::left)
		<< setw(20)
		<< ""
		<< "DANH SACH SINH VIEN"
		<< endl
		<< endl
		<< setw(12) << "MSSV"
		<< setw(30) << "Ho va Ten"
		<< setw(12) << "Khoa"
		<< setw(12) << "Diem"
		<< endl
		<< setw(12) << "-----"
		<< setw(30) << "-------------------"
		<< setw(12) << "-----"
		<< setw(12) << "----"
		<< endl
		<< setw(12) << "1211520"
		<< setw(30) << "Le Duy Tung"
		<< setw(12) << "33"
		<< setw(12) << "4.57"
		<< endl
		<< setw(12) << "1210152"
		<< setw(30) << "Tran Van Tien"
		<< setw(12) << "34"
		<< setw(12) << "VT"
		<< endl
		<< setw(12) << "1211962"
		<< setw(30) << "Pham Duc Anh"
		<< setw(12) << "33"
		<< setw(12) << "6.48"
		<< endl
		<< setw(12) << "1211518"
		<< setw(30) << "Nguyen Hong Phuc"
		<< setw(12) << "36"
		<< setw(12) << "VT"
		<< endl
		<< setw(12) << "1211510"
		<< setw(30) << "Pham Minh Duc"
		<< setw(12) << "30"
		<< setw(12) << "8.05"
		<< endl
		<< setw(12) << "1211793"
		<< setw(30) << "Nguyen Khac Vy"
		<< setw(12) << "33"
		<< setw(12) << "VT"
		<< endl
		<< setw(12) << "1211519"
		<< setw(30) << "Nguyen Tan Tai"
		<< setw(12) << "34"
		<< setw(12) << "2.89"
		<< endl
		<< "=========================================================="
		<< endl;		
	_getch();
	return 0;
}