#include <iostream>
#include <conio.h>

using namespace std;

#define TAB '\t'

int KiemTra_NT(int n);
void LietKeSoNT(unsigned int n);

int main()
{
	unsigned int n;
	cout << endl << "Nhap so luong so NT can tim : ";
	cin >> n;
	LietKeSoNT(n);
	_getch();
	return 1;
}

int KiemTra_NT(int n)
{
	int kq, m, i;
	if (n < 2)
		kq = 0;
	else
	{
		m = (int)sqrt((float)n); 
		i = 2;
		kq = 1;
		// Cach dau tien: Dung cau lenh do ... while
		do
		{
			if (n % i == 0)
				kq = 0;
			i++;
		}
		while (i <= m && kq);
		
		/* Cach khac: Dung cau lenh for...
		kq = 1;
		for (i=2;i<=m && kq;i++)
			if (n % i == 0)
				kq = 0;	*/
	}
	return kq;
}

void LietKeSoNT(unsigned int n)
{
	int dem = 0, so = 2;
	do
	{
		if (KiemTra_NT(so))
		{
			cout << so << TAB;
			dem++;
		}
		so++;
	}
	while (dem < n);
}