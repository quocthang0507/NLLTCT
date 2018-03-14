#define MAX 100

typedef char *ChuoiDong;

int DemKhoangTrang(ChuoiDong s)
{
	int i, l=strlen(s), dem=0;
	for (i=0;i<l;i++)
		if (*(s+i)==' ' || *(s+i)=='\t')
			dem++;
	return dem;
}

int ViTri_Chuoi(ChuoiDong s, ChuoiDong t)
{
	char *temp;
	int vt;
	temp=strstr(s,t);
	vt=(int)(temp-s);
	if (temp!=NULL)
		return vt;
	else return -1;
}

int ViTri_DT_x(ChuoiDong s, char x)
{
	int i, l=strlen(s), vt;
	for (i=0;i<l;i++)
		if (*(s+i)==x)
		{
			vt=i;
			break;
		}
	return vt;
}

void DaoTu(ChuoiDong s)
{
	char *t, a[MAX];
	int l=strlen(s);
	for (int i=l-1;i>=0;i--)
		if (s[i]==' ')
		{
			t=s+i+1;
			s[i]='\0';
			break;
		}
	strcpy_s(a,MAX,strstr(s," "));
	l=strlen(s)-strlen(strstr(s," "));
	s[l]='\0';
	strcat(strcat(strcat(t,a)," "),s);
	strcpy_s(s,MAX,t);
}

void DoiChuHoa(ChuoiDong s)
{
	char temp;
	_strlwr(s);
	temp=*(s+0)-32;
	*(s+0)=temp;
}

int DemKyTu(ChuoiDong s, char x)
{
	int i, l=strlen(s), dem=0;
	for (i=0;i<l;i++)
		if (*(s+i)==x)
			dem++;
	return dem;
}

void LietKeKyTu(ChuoiDong s)
{
	ChuoiDong t;
	t=new char [MAX];
	int i, m=0, j, dau, l=strlen(s), dem;
	for (i=0;i<l;i++)
	{
		dau=1;
		for (j=0;j<m && dau;j++)
			dau=dau && (*(s+i)!=*(t+j));
		if (dau)
		{
			*(t+m++)=*(s+i);
			dem=DemKyTu(s,*(s+i));
			cout << "\nKy tu '" << *(s+i) << "' xuat hien " << dem << " lan";
		}
	}
	delete []t;
}

int DemTu(ChuoiDong s)
{
	int dem=0, i, l=strlen(s);
	if (*(s+0)!=0)
	{
		strcat_s(s,MAX," ");
		dem=1;
		for (i=0;i<l;i++)
			if (*(s+i)==' ' && ((*(s+i-1)>=65 && *(s+i-1)<=90) || *(s+i-1)>=97 && *(s+i-1)<=122))
				dem++;
	}
	return dem;
}