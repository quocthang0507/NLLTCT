#define MAX 100

struct DonThuc
{
	double heSo;
	int mu;
};

typedef DonThuc DaThuc[MAX];

void RutGon_DT(DaThuc A, int &n);
void Khu_HS0(DaThuc A, int &n);
void SapTangTheoMu(DaThuc A, int n);
void DinhDang_DT(DaThuc A, int &n);
void NhapDaThuc(DaThuc A, int &n);
void XuatDaThuc(DaThuc A, int n);
void Tong2DaThuc(DaThuc A, int m, DaThuc B, int n, DaThuc C, int &k);
void Hieu2DaThuc(DaThuc A, int m, DaThuc B, int n, DaThuc C, int &k);
void Nhan_DonThuc(DaThuc A, int m, DonThuc p, DaThuc C, int &k);
void NhanDaThuc(DaThuc A, int m, DaThuc B, int n, DaThuc C, int &k);
double x_Mu_m(double x, int m);
double A_x(DaThuc A, int m, double x);

void RutGon_DT(DaThuc A, int &n)
{
	DaThuc B;
	int i, j;
	int h = 0, kq;
	for (i = 0; i < n; i++)
	{
		kq = 0;
		for (j = 0; j < h; j++)
			if (A[i].mu == B[j].mu)
			{
				kq = 1;
				break;
			}
		if (kq == 1)
			B[j].heSo += A[i].heSo;
		else
			B[h++] = A[i];
	}
	n = h;
	for (j = 0; j < h; j++)
		A[j] = B[j];
}


void Khu_HS0(DaThuc A, int &n)
{
	int i,
	h = 0;
	DaThuc B;
	for (i = 0; i < n; i++)
		if (A[i].heSo != 0)
			B[h++] = A[i];
	n = h;
	for (i = 0; i < n; i++)
		A[i] = B[i];
}

void SapTangTheoMu(DaThuc A, int n)
{
	int i, j;
	DonThuc t;
	for (i = 0; i < n - 1; i++)
		for (j = i + 1; j < n; j++)
			if (A[i].mu > A[j].mu)
			{
			t = A[i];
			A[i] = A[j];
			A[j] = t;
			}
}

void DinhDang_DT(DaThuc A, int &n)
{
	if (n == 0)
	{
		cout << "\nDa thuc rong!";
		_getch();
		return;
	}
	RutGon_DT(A, n);
	Khu_HS0(A, n);
	SapTangTheoMu(A, n);
}

void NhapDaThuc(DaThuc A, int &n)
{
	int i;
	cout << "\nNhap kich thuoc mang : ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cout << "\nDa thuc " << "[" << i << "] :";
		cout << "\nNhap he so != 0 : he so = ";
		cin >> A[i].heSo;
		cout << "\nNhap so mu : So mu = ";
		cin >> A[i].mu;
	}
	DinhDang_DT(A, n);
}

void XuatDaThuc(DaThuc A, int n)
{
	if (n == 0)
	{
		cout << "\nDa thuc rong!";
		_getch();
		return;
	}
	int i = 0;
	if (A[i].mu == 0)
		cout << A[i].heSo;
	else
	{
		if (A[i].mu == 1)
		{
			if (A[i].heSo == 1)
				cout << "x ";
			else
				if (A[i].heSo == -1)
					cout << "-x ";
				else
					cout << A[i].heSo << "x ";
		}
		else
		{
			if (A[i].heSo == 1)
				cout << "x^" << A[i].mu << " ";
			else
				if (A[i].heSo == -1)
					cout << "-x^" << A[i].mu << " ";
				else
					cout << A[i].heSo << "x^" << A[i].mu << " ";
		}
	}
	i++;
	while (i < n)
	{
		if (A[i].mu == 1)
		{
			if (A[i].heSo == 1)
				cout << "+x ";
			else
				if (A[i].heSo == -1)
					cout << "-x ";
				else
					if (A[i].heSo > 0)
						cout << "+ " << A[i].heSo << "x ";
					else
						cout << A[i].heSo << "x ";
		}
		else
		{
			if (A[i].heSo == 1)
				cout << "+x^" << A[i].mu << " ";
			else 
				if (A[i].heSo == -1)
					cout << "-x^" << A[i].mu << " ";
				else
					if (A[i].heSo > 0)
						cout << "+ " << A[i].heSo << "x^" << A[i].mu << " ";
					else
						cout << A[i].heSo << "x^" << A[i].mu << " ";
			}
		i++;
	}
}

void Tong2DaThuc(DaThuc A, int m, DaThuc B, int n, DaThuc C, int &k )
{
	int i =0, j= 0;
	k = 0;
	DonThuc x;
	while (i < m && j < n)
	{
		if (A[i].mu < B[j].mu)
		{
			C[k++] = A[i];
			i++;
		}
		else
			if (B[j].mu < A[i].mu)
			{
				C[k++] = B[j];
				j++;
			}
			else
			{
				x.heSo = A[i].heSo + B[j].heSo;
				x.mu = A[i].mu;
				if (x.heSo != 0)
					C[k++] = x;
				i++;
				j++;
			}
	}
	while (i < m)
	{
		C[k++] = A[i];
		i++;
	}
	while (j < n)
	{
		C[k++] = B[j];
		j++;
	}
	DinhDang_DT(C, k);
}

void Hieu2DaThuc(DaThuc A, int m, DaThuc B, int n, DaThuc C, int &k)
{
	int i = 0, j = 0;
	k = 0;
	DonThuc x;
	while (i < m && j < n)
	{
		if (A[i].mu < B[j].mu)
		{
			C[k++] = A[i];
			i++;
		}
		else
			if (B[j].mu < A[i].mu)
			{
				x.mu = B[j].mu;
				x.heSo = -B[j].heSo;
				C[k++] = x;
				j++;
			}
			else 
			{
				x.heSo = A[i].heSo - B[j].heSo;
				x.mu = A[i].mu;
				if (x.heSo != 0)
					C[k++] = x;
				i++;
				j++;
		}
	}
	while (i < m)
	{
		C[k++] = A[i];
		i++;
	}
	while (j < n)
	{
		x.mu = B[j].mu;
		x.heSo = -B[j].heSo;
		C[k++] = x;
		j++;
		}
	DinhDang_DT(C, k);
}

void Nhan_DonThuc(DaThuc A, int m, DonThuc p, DaThuc C, int &k)
{
	int i;
	DonThuc x;
	k = 0;
	for (i = 0; i < m; i++)
	{
		x.mu = A[i].mu + p.mu;
		x.heSo = A[i].heSo * p.heSo;
		C[k++] = x;
	}
	DinhDang_DT(C, k);
}

void NhanDaThuc(DaThuc A, int m, DaThuc B, int n, DaThuc C, int &k)
{
	DaThuc T1, T2;
	int i, j, h1, h2;
	Nhan_DonThuc(B, n, A[0],C , k);
	for (i = 1; i < m; i++)
	{
		Nhan_DonThuc(B, n, A[i], T1, h1);
		Tong2DaThuc(C, k, T1, h1, T2, h2);
		for (j = 0; j < h2; j++)
			C[j] = T2[j];
		k = h2;
	}
	DinhDang_DT(C, k);
}

double x_Mu_m(double x, int m)
{
	double t = 1;
	int i;
	for (i = 1; i <= m; i++)
		t *= x;
	return t;
}

double A_x(DaThuc A, int m, double x)
{
	double v = 0, t;
	int i;
	for (i = 0; i < m; i++)
	{
		t = A[i].heSo * x_Mu_m(x, A[i].mu);
		v += t;
	}
	return v;
}