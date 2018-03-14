#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int MucChoi();
int SinhSoNgauNhien();
int XuLySoDoan(int soDe, int k);
void ThongBao_kqtc(int soDe, int kq);

int main()
{
	int soDe, k, kq;
	k=MucChoi();
	soDe=SinhSoNgauNhien();
	kq=XuLySoDoan(soDe, k);
	ThongBao_kqtc(soDe,kq);
	_getch();
	return 1;
}

int SinhSoNgauNhien()
{
	int soDe;
	srand ((unsigned int)time(NULL));
	soDe=rand()%100;
	return soDe;
}

int XuLySoDoan(int soDe, int k)
{
	int soDoan=0, i=0, flag;
	while (soDoan!=soDe && i<k)
	{
		cout << "Nhap so doan cua ban [1;100] : ";
		cin >> soDoan;
		if (soDoan == soDe)
			flag=1;
		else
			if (soDoan < soDe)
			{
				cout << "    -> So can doan phai lon hon!\n";
				flag=0;
			}
			else
				if (soDoan > soDe)
				{
					cout << "    -> So can doan phai nho hon!\n";
					flag=0;
				}
		i++;
	}
	return flag;
}

void ThongBao_kqtc(int soDe, int kq)
{
	if (kq)
		cout << "Chuc mung, ban da chien thang!\n";
	else
	{
		cout << "- - - - - - - - - - - - - - - - -" 
			<< "\nDa het luot choi\n" 
			<< "Ban da thua cuoc!\n"
			<< "Ket qua : " << soDe << endl;
	}
}

int MucChoi()
{
	cout << " * * * * * TRO CHOI DOAN SO * * * * * \n";
	int k;
	cout << "\nNhap muc choi (so lan doan) : ";
	cin >> k;
	return k;
}