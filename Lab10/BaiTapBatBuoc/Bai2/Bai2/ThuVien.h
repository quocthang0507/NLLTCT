void NhapN(unsigned& n);
int TinhTong_SoLe_N_DauTien(unsigned n);
int TinhTong_N_SoLe_DauTien(unsigned n);
long long TinhTich_N_SoLe_DauTien(unsigned n);
long long TinhGiaiThua(unsigned n);

void NhapN(unsigned& n)
{
	do {
		cout << "\nNhap so nguyen duong n = ";
		cin >> n;
	} while (n <= 0);
}

int TinhTong_SoLe_N_DauTien(unsigned n)
{
	if (n == 1)
		return 1;
	else if (n % 2 == 1)
		return n + TinhTong_N_SoLe_DauTien(n - 1);
	return TinhTong_N_SoLe_DauTien(n - 1);
}

int TinhTong_N_SoLe_DauTien(unsigned n)
{
	if (n == 1)
		return 1;
	return 2 * n - 1 + TinhTong_N_SoLe_DauTien(n - 1);
}

long long TinhTich_N_SoLe_DauTien(unsigned n)
{
	if (n == 1)
		return 1LL;
	return (2 * n - 1) * TinhTich_N_SoLe_DauTien(n - 1);
}

long long TinhGiaiThua(unsigned n)
{
	if (n == 0 || n == 1)
		return 1LL;
	return n * TinhGiaiThua(n - 1);
}

long long TinhTongGiaiThua(unsigned n)
{
	if (n == 0 || n == 1)
		return n;
	return TinhGiaiThua(n) + TinhTongGiaiThua(n - 1);
}