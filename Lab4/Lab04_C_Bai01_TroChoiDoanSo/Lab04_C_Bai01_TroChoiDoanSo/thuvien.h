#define MAX 1000

int ChonMucDoan();
int SinhSoNgauNhien();
int XuLyTroChoi(int k, int soDe);
void ThongBaoKetQua(int kq, int soDe);

int ChonMucDoan()
{
	int k;
	do
	{
		cout << "\nChon so lan doan toi da (3, 5, 7) : k = ";
		cin >> k;
	}
	while (k != 3 && k != 5 && k != 7);
	return k;
}

int SinhSoNgauNhien()
{
	int soDe;
	srand((unsigned int)time(0));
	soDe = rand()/MAX;
	return soDe;
}

int XuLyTroChoi(int k, int soDe)
{
	int i, soDoan, kq = 0;
	for (i = 1; i <= k; i++)
	{
		cout << "\nDoan lan " << i << ", so doan = ";
		cin >> soDoan;
		if (soDoan == soDe)
		{
			kq = 1;
			break;
		}
		else
			if (soDoan > soDe)
				cout << "\nSo doan phai nho hon";
			else
				cout << "\nSo doan phai lon hon";
	}
	return kq;
}

void ThongBaoKetQua(int kq, int soDe)
{
	system("CLS");
	cout << "\nKET QUA TRO CHOI : ";
	if (kq)
		cout << "\nNguoi choi thang";
	else
		cout << "\nNguoi choi thua";
		cout << "\nDap an : " << soDe;
}