#define MAX 100

typedef char String[MAX];

void ChuyenKT_Thuong(String a)
{
	int i;
	char temp;
	int l = strlen(a);
	for (i = 0; i < l; i++)
		if (a[i] >= 65 && a[i] <= 90)
		{
			temp = a[i] + 32;
			a[i] = temp;
		}
	/*Cach khac:
	strlwr(a);*/
}

void ChuyenKT_Hoa(String a)
{
	int i;
	char temp;
	int l = strlen(a);
	for (i = 0; i < l; i++)
		if (a[i] >= 97 && a[i] <= 122)
		{
			temp = a[i] - 32;
			a[i] = temp;
		}
	/*Cach khac:
	strupr(a);*/
}

void DaoNguocChuoi(String a)
{
	int i, j, temp, l = strlen(a);
	for (i = 0, j = l - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}

int KT_ChuoiDoiXung(String a)
{
	int i, l = strlen(a), kq = 1;
	for (i = 0; i < l / 2; i++)
		if (a[i] != a[l - i - 1])
		{
			kq = 0;
			break;
		}
	return kq;
}