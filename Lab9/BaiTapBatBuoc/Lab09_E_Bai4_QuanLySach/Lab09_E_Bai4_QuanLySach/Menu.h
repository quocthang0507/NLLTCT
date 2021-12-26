void XuatMenu()
{
	cout << "\n========================HE THONG CHUC NANG========================";
	cout << "\n0. Thoat khoi chuong trinh";
	cout << "\n1. Nhap danh sach tai lieu";
	cout << "\n2. Xem danh sach tai lieu";
	cout << "\n3. Tinh tong gia tat ca cac tai lieu";
	cout << "\n4. Tim danh muc sach duoc xuat ban boi nhaXb vao namXb cho truoc";
	cout << "\n5. Tim nhung bai bao khoa hoc co su tham gia cua tac gia tacGia cho truoc";
	cout << "\n6. Thong ke so luong tai lieu theo moi loai";
	cout << "\n7. Liet ke cac tai lieu theo tung nam xuat ban";
	cout << "\n8. Xem thong tin tai lieu theo ma so tai lieu maTl cho truoc";
	cout << "\n9. Sap xep cac tai lieu tang dan theo tua de";
	cout << "\n===================================================================";
}

int ChonMenu(int soMenu)
{
	int stt;
	for (;;)
	{
		system("CLS");
		XuatMenu();
		cout << "\nNhap 1 so trong khoang tu [0,...," << soMenu << "] de chon chuc nang, stt = ";
		cin >> stt;
		if (0 <= stt && stt <= soMenu)
			break;
	}
	return stt;
}

void XuLyMenu(int menu, TaiLieu* a, int& n)
{
	unsigned long tongGia, namXB;
	char nhaXB[10], tacGia[50], maTL[11];
	int soNam = 0;
	switch (menu)
	{
	case 0:
		system("CLS");
		cout << "\n0. Thoat khoi chuong trinh\n";
		delete[]a;
		break;
	case 1:
		system("CLS");
		cout << "\n1. Nhap danh sach tai lieu\n";
		TaoDanhSach(a, n);
		system("CLS");
		cout << "\n\t\t\t\t DANH SACH TAI LIEU\n";
		XuatDanhSach(a, n);
		cout << "\nSo tai lieu trong danh sach la : " << n;
		break;
	case 2:
		system("CLS");
		cout << "\n2. Xem danh sach tai lieu\n";
		cout << "\n\t\t\t\t DANH SACH TAI LIEU\n";
		XuatDanhSach(a, n);
		cout << "\nSo tai lieu trong danh sach la : " << n;
		break;
	case 3:
		system("CLS");
		cout << "\n3. Tinh tong gia tat ca cac tai lieu\n";
		tongGia = TinhTongGia(a, n);
		cout << "\nTong gia cua tat ca cac tai lieu la: " << tongGia << " VND";
		break;
	case 4:
		system("CLS");
		cout << "\n4. Tim danh muc sach duoc xuat ban boi nhaXb vao namXb cho truoc\n";
		XuatDanhSach(a, n);
		cout << "\nNhap ten nha xuat ban: ";
		cin.ignore();
		gets_s(nhaXB, 10);
		cout << "\nNhap nam xuat ban: ";
		cin >> namXB;
		cout << "\nKet qua tim kiem: \n";
		TimSach_NhaXB_TheoNamXB(a, n, nhaXB, namXB);
		break;
	case 5:
		system("CLS");
		cout << "\n5. Tim nhung bai bao khoa hoc co su tham gia cua tac gia tacGia cho truoc\n";
		XuatDanhSach(a, n);
		cout << "\nNhap ten tac gia: ";
		cin.ignore();
		gets_s(tacGia, 50);
		cout << "\nKet qua tim kiem: \n";
		TimBaiBaoKH_TheoTacGia(a, n, tacGia);
		break;
	case 6:
		system("CLS");
		cout << "\n6. Thong ke so luong tai lieu theo moi loai\n";
		cout << "\n1. So luong tai lieu thuoc loai Sach: " << ThongKe_SoLuong_TheoLoai(a, n, "Sach") << " cuon";
		cout << "\n2. So luong tai lieu thuoc loai Bao KH: " << ThongKe_SoLuong_TheoLoai(a, n, "Bao KH") << " cuon";
		cout << "\n3. So luong tai lieu thuoc loai TapChi: " << ThongKe_SoLuong_TheoLoai(a, n, "Tap chi") << " cuon";
		cout << "\n4. So luong tai lieu thuoc loai Bao KH: " << ThongKe_SoLuong_TheoLoai(a, n, "Luan van") << " cuon";
		break;
	case 7:
		system("CLS");
		cout << "\n7. Liet ke cac tai lieu theo tung nam xuat ban\n";
		XuatDanhSach_TheoNam(a, n);
		break;
	case 8:
		system("CLS");
		cout << "\n8. Xem thong tin tai lieu theo ma so tai lieu maTl cho truoc\n";
		XuatDanhSach(a, n);
		cin.ignore();
		cout << "\nNhap ma tai lieu: ";
		gets_s(maTL, 11);
		TimTaiLieu_TheoMaTaiLieu(a, n, maTL);
		break;
	case 9:
		system("CLS");
		cout << "\n9. Sap xep cac tai lieu tang dan theo tua de\n";
		cout << "\nDanh sach ban dau:\n";
		XuatDanhSach(a, n);
		cout << "\nDanh sach sau khi sap xep tang dan theo tua de:\n";
		SapXep_TaiLieu_TuaDe(a, n);
		XuatDanhSach(a, n);
		break;
	}
	_getch();
}