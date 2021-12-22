void NhapN(unsigned& n);
int DaoNguocSo(unsigned n);
int DemSoChuSo(unsigned n);
int TimChuSoLonNhat(unsigned n);
int DoiSoNhiPhan(unsigned n);
int TimChuSoDauTien(unsigned n);

void NhapN(unsigned& n)
{
	do {
		cout << "\nNhap so nguyen duong n = ";
		cin >> n;
	} while (n <= 0);
}

int DaoNguocSo(unsigned n)
{
	if (n == 0)
		return 0;
	int soChuSo = DemSoChuSo(n),
		soCuoiCung = n % 10;
	return (soCuoiCung * pow(10, soChuSo)) + DaoNguocSo(n / 10);
}

int DemSoChuSo(unsigned n)
{
	if (n == 0)
		return 0;
	return 1 + DemSoChuSo(n / 10);
}

int TimChuSoLonNhat(unsigned n)
{
	if (n == 0)
		return 0;
	int soCuoiCung = n % 10;
	int max = TimChuSoLonNhat(n / 10);
	return soCuoiCung > max ? soCuoiCung : max;
}

int DoiSoNhiPhan(unsigned n)
{
	if (n == 0)
		return 0;
	return (n % 2 + 10 * DoiSoNhiPhan(n / 2));
}

int TimChuSoDauTien(unsigned n)
{
	if (n == 0)
		return 0;
	else if (n < 10)
		return n;
	return TimChuSoDauTien(n / 10);
}