typedef int MaTran[6][7];

int TimThu(int m, int y)
{
	int t, x, k, w;
	t = y - (14 - m)/12;
	x = t + t/4 - t/100 +t/400;
	k = m + 12 * ((14 - m) / 12) - 2;
	w = (1 + x + (31 * k) / 12) % 7;
	return w;
}

int TimSoNgay(int m, int y)
{
	int soNgay;
	switch (m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			soNgay = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			soNgay = 30;
			break;
		default:
			if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
				soNgay = 29;
			else
				soNgay = 28;
				break;
	}
	return soNgay;
}

void TaoLich(MaTran Lich, int thu, int ngay)
{
	int dem=1;
	//Gan gia tri dau tien cho ca ma tran la so 0
	for (int i=0;i<6;i++)
		for (int j=0;j<7;j++)
			Lich[i][j]=0;
	//Gan gia tri cho hang dau tien
	for (int i=thu;i<7;i++)
	{
		Lich[0][i]=dem;
		dem++;
	}
	//Gan gia tri cho cac hang con lai
	for (int i=1;i<6;i++)
		for (int j=0;j<7;j++)
		{	
			if (dem>ngay) break; //Neu vuot qua so ngay cua 1 thang thi THOAT
			else
			{
				Lich[i][j]=dem;
				dem++;
			}
		}
}

void XuatLich(MaTran Lich)
{
	cout << setw(10) << "Chu nhat"
		<< setw(10) << "Thu 2"
		<< setw(10) << "Thu 3"
		<< setw(10) << "Thu 4"
		<< setw(10) << "Thu 5"
		<< setw(10) << "Thu 6"
		<< setw(10) << "Thu 7" << "\n";
	for (int i=0;i<6;i++)
	{
		cout << '\n';
		for (int j=0;j<7;j++)
		{
			if(Lich[i][j]==0)
				cout<< setw(10) << " ";
			else
			cout << setw(10) << Lich[i][j];
		}
	}
}