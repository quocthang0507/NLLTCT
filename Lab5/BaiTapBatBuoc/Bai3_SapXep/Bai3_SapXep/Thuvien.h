#define MAX 100
#define TAB '\t'

typedef int DaySo[MAX];

void NhapTuDong(DaySo a, int &n);
void XuatMang(DaySo a, int n);
void HoanVi(int &a, int &b);
void SapXep_DuongTang_ConLaiGiuNguyen(DaySo a, int n);
void SapXep_0Cuoi_ConLaiTangDan(DaySo a, int n);
void SapXep_0Dau_SoAmGiuaGiam_DuongCuoiTang(DaySo a, int n);
void SapXep_LeDauTang_ChanCuoiGiam(DaySo a, int n);
void SapXep_SoNTDauTang_ConLaiCuoiGiam(DaySo a, int n);
bool KiemTraSoNT(unsigned n);

void NhapMang(DaySo a, int &n)
{
	int i;
	for (i=0;i<n;i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(DaySo a, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << TAB;
        if ((i + 1) % 20 == 0)
            cout << endl;
    }
}

void NhapTuDong(DaySo a, int &n)
{
    cout << "Nhap vao kich thuoc n = ";
    cin >> n;
    srand(time(NULL));
    for(int i = 0; i < n; i++)
    {
        a[i] = -10 + rand() % 21; //[-10;10]
    }
}

void HoanVi(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

void SapXep_DuongTang_ConLaiGiuNguyen(DaySo a, int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if (a[i] > 0 && a[i] > a[j])
                HoanVi(a[i], a[j]);
        }
}
 
void SapXep_0Cuoi_ConLaiTangDan(DaySo a, int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if ((a[i] == 0 && a[j] != 0) ||
                (a[i] > a[j] && a[i] != 0 && a[j] != 0))
                    HoanVi(a[i], a[j]);
        }
}
 
void SapXep_0Dau_SoAmGiuaGiam_DuongCuoiTang(DaySo a, int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if ((a[i] != 0 && a[j] == 0) ||
                (a[i] < 0 && a[j] < 0 && a[i] < a[j]) || (a[i] > 0 && a[j] < 0) ||
                (a[i] > 0 && a[j] > 0 && a[i] > a[j]))
                    HoanVi(a[i], a[j]);
        }
}
 
void SapXep_LeDauTang_ChanCuoiGiam(DaySo a, int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if ((a[i] % 2 == 0 && a[j] % 2 != 0) ||
                (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j]) ||
                (a[i] % 2 == 0 && a[j] % 2 == 0 && a[i] < a[j]))
                    HoanVi(a[i], a[j]);
        }
}
 
bool KiemTraSoNT(int n)
{
    if (n <= 1)
        return false;
    else if (n == 2)
        return true;
    else
    {
        int m = sqrt(n);
        for (int i = 2; i <= m; i++)
            if (n % i == 0)
                return false;
        return true;
    }
}
 
void SapXep_SoNTDauTang_ConLaiCuoiGiam(DaySo a, int n)
{
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
        {
            if ((!KiemTraSoNT(a[i]) && KiemTraSoNT(a[j])) ||
                (KiemTraSoNT(a[i]) && KiemTraSoNT(a[j]) && a[i] > a[j]) ||
                (!KiemTraSoNT(a[i]) && !KiemTraSoNT(a[j]) && a[i] < a[j]))
                    HoanVi(a[i], a[j]);
        }
}