//Khai báo kiểu dữ liệu phân số(SPhanSo)
// Nhập / Xuất phân số
// Rút gọn phân số
// Tính tổng, hiệu, tích, thương hai phân số
// Kiểm tra phân số tối giản
// Quy đồng hai phân số
// Kiểm tra phân số âm hay dương
// So sánh hai phân số
/**
Hello world.
*/
#include<iostream>
#include<conio.h>
using namespace std;
//void NhapPhanSo(sPhanSo &sP );
//void XuatPhanSo(sPhanSo sP);
struct sPhanSo //Kieu du lieu cau truc
{
	int nTuSo;
	int nMauSo;
	
};

//Nhap 2 phan so
void NhapPhanSo(sPhanSo &ps)
{
	cout << "Nhap tu so: ";
	cin >> ps.nTuSo;
	do
	{
		if (ps.nMauSo == 0)
		{
			cout << "Nhap sai / vui long nhap lai " << endl;
		}
		cout << "Nhap mau so: ";
		cin >> ps.nMauSo;
	} while (ps.nMauSo == 0);
	
}
void XuatPhanSo(sPhanSo ps)
{
	cout << ps.nTuSo << "/" << ps.nMauSo << endl;
}
//TimUCLN //co uoc chung de rut gon
int TimUCLN(int a, int b)
{
	 a = abs(a);
	 b = abs(b);
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}
//Rút gọn phân số
void RutGonPhanSo(sPhanSo &ps)//VD Rutgon 4/4 = 1/1
{
	int UCLN = TimUCLN(ps.nTuSo, ps.nMauSo);
	ps.nTuSo = ps.nTuSo / UCLN;
	ps.nMauSo = ps.nMauSo / UCLN;
}
//Tính tổng, hiệu, tích, thương hai phân số
sPhanSo TinhTongPhanSo(sPhanSo a, sPhanSo b)
{
	sPhanSo Tong;//Để cộng hai phân số, trước hết ta quy đồng mẫu số của các phân số, rồi cộng hai phân số đó.
	Tong.nTuSo = a.nTuSo * b.nMauSo + a.nMauSo * b.nTuSo;
	Tong.nMauSo = a.nMauSo * b.nMauSo;
//	KiemTraPhanSoToiGian(Tong);
	return Tong;
}
sPhanSo TinhHieuPhanSo(sPhanSo a, sPhanSo b)
{
	sPhanSo Hieu;//Để nhân hai phân số, ta lấy tử số nhân với tử số, mẫu số nhân với mẫu số.
	Hieu.nTuSo = a.nTuSo * b.nMauSo - a.nMauSo * b.nTuSo;
	Hieu.nMauSo = a.nMauSo * b.nMauSo;
	
	return Hieu;
}
sPhanSo TinhTichPhanSo(sPhanSo a, sPhanSo b)
{
	sPhanSo Tich;
	Tich.nTuSo = a.nTuSo * b.nTuSo;
	Tich.nMauSo = a.nMauSo * b.nMauSo;
	return Tich;
}
sPhanSo TinhThuongPhanSo(sPhanSo a, sPhanSo b)
{
	sPhanSo Thuong;
	Thuong.nTuSo = a.nTuSo * b.nMauSo;
	Thuong.nMauSo = a.nMauSo * b.nTuSo;
	return Thuong;
}
//Kiểm tra phân số tối giản
bool KiemTraPhanSoToiGian(sPhanSo &ps)
{
	int UCLN = TimUCLN(ps.nTuSo, ps.nMauSo);
	if(UCLN == 1)
	{
		return true;
	}
	return false;
	//return UCLN == 1;
}
//Kiểm tra phân số âm hay dương
bool KiemTraSoAmHayDuong(sPhanSo &ps)
{
	if (ps.nTuSo*ps.nMauSo > 0)
	{
		return true;
	}
	else
	{
		return false;
	} 

}
int main()
{
	//khai bao
	sPhanSo a, b;
	sPhanSo ps;
	cout << "Nhap phan so 1 : " << endl;
	NhapPhanSo(a);
	cout << "Xuat phan so a : ";
	XuatPhanSo(a);
	if (KiemTraSoAmHayDuong(a) == true)
	{
		cout << "La phan so duong: " << endl;
	}
	if (KiemTraSoAmHayDuong(a) == false)
	{
		cout << "la phan so am:" << endl;
	}
	cout << "Nhap phan so 2 : " << endl;
	NhapPhanSo(b);
	cout << "Xuat phan so b : ";
	XuatPhanSo(b);
	if (KiemTraSoAmHayDuong(b) == true)
	{
		cout << "La phan so duong: " << endl;
	}
	if (KiemTraSoAmHayDuong(b) == false)
	{
		cout << "la phan so am:" << endl;
	}
	RutGonPhanSo(a);
	RutGonPhanSo(b); 
	sPhanSo Tong = TinhTongPhanSo(a,b);
	sPhanSo Hieu = TinhHieuPhanSo(a, b);
	sPhanSo Tich = TinhTichPhanSo(a, b);
	sPhanSo Thuong = TinhThuongPhanSo(a, b);
	cout << "Tong: " << endl;
	XuatPhanSo(Tong);
	cout << "Hieu: " << endl;
	XuatPhanSo(Hieu);
	cout << "Tich: " << endl;
	XuatPhanSo(Tich);
	cout << "Thuong: " << endl;
	XuatPhanSo(Thuong);

	if (KiemTraPhanSoToiGian(a))
	{
		cout << endl;
		XuatPhanSo(a);
		cout << "La Pha So Toi Gian: " << endl;
		
	}
	else
	{
		cout << endl;
		XuatPhanSo(a);
		cout << "Khong la phan so toi gian: ";

	}
	if (KiemTraPhanSoToiGian(b)== true)
	{
		cout << endl;
		XuatPhanSo(b);
		cout << "\nLa Pha So Toi Gian: ";
	}
	else
	{
		cout << endl;
		XuatPhanSo(b);
		cout << "\nKhong la phan so toi gian: ";
	}
	system("pause");
	return 0;
}






