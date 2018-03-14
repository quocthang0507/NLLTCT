#include <iostream>

void XuatMenu();
int ChonMenu (int soMenu);
void XuLyMenu(int menu, unsigned long n);

void XuatMenu()
{
	cout << "\n====== CAC CHUC NANG CUA CHUONG TRINH ======";
	cout << "\n0. THOAT";
	cout << "\n1. Xuat cac so tu 1 den n";
	cout << "\n2. Dem so luong cac so chia het cho 3 va khong chia het cho 4 trong [1..n]";
	cout << "\n3. Dem so luong chu so cua n";
	cout << "\n4. Dao nguoc so n";
	cout << "\n5. Tong cac chu so cua n";
	cout << "\n6. Chu so dau tien cua n";
	cout << "\n7. Xuat cac so hoan chinh trong [1..n]";
	cout << "\n8. Tim m sao cho 1+2+...+m <= n";
	cout << "\n============================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap so thu tu cua menu (tu 1 den 8) : ";
		cin >> stt;
		if (0<= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, unsigned long n)
{
	long ketQua;
	switch (menu)
	{
		case 0:
			cout << "\n THOAT KHOI CHUONG TRINH\n";
			break;
		case 1:
			cout << "\n Ban da chon chuc nang 1\n";
			cauA(n);
			break;
		case 2:
			cout << "\n Ban da chon chuc nang 2\n";
			ketQua=cauB(n);
			cout << "Co " << ketQua << " so chia het cho 3 nhung khong chia het cho 4 trong doan [1.." << n << "]";
			break;
		case 3:
			cout << "\n Ban da chon chuc nang 3\n";
			ketQua=cauC(n);
			cout << "Chuoi da nhap co " << ketQua << " so";
			break;
		case 4:
			cout << "\n Ban da chon chuc nang 4\n";
			ketQua=cauD(n);
			cout << "So " << n << " da dao nguoc thanh " << ketQua;
			break;
		case 5:
			cout << "\n Ban da chon chuc nang 5\n";
			cout << "Tong cac chu so cua " << n << " bang ";
			cauE(n);
			break;
		case 6:
			cout << "\n Ban da chon chuc nang 6\n";
			ketQua=cauF(n);
			cout << "Chu so dau tien cua " << n << " la " << ketQua;
			break;
		case 7:
			cout << "\n Ban da chon chuc nang 7\n";
			cout << "So hoan chinh trong pham vi tu [1.." << n << "] la ";
			cauG(n);
			break;
		case 8:
			cout << "\n Ban da chon chuc nang 8\n";
			ketQua=cauH(n);
			cout << " 1 + 2 + ... + " << ketQua << " <= " << n;
			break;
	}
	_getch();
}