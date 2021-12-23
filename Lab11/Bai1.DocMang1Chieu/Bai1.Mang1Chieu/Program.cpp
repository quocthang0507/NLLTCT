#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

#include "ThuVien.h"

void ChayChuongTrinh();

int main()
{
	ChayChuongTrinh();
	_getch();
	return 0;
}

void ChayChuongTrinh()
{
	int n, a[MAX];
	char filename[MAX];
	system("cls");
	cout << "Nhap ten file de doc: ";
	cin >> filename;
	File_Array(filename, a, n);
	cout << "\nKich thuoc: " << n << endl
		<< "\nMang da doc: \n";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << '\t';
	}
}