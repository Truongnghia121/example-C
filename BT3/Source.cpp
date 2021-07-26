//Khai báo kiểu dữ liệu phân số(SPhanSo)
// Nhập / Xuất phân số
// Rút gọn phân số
// Tính tổng, hiệu, tích, thương hai phân số
// Kiểm tra phân số tối giản
// Quy đồng hai phân số
// Kiểm tra phân số âm hay dương
// So sánh hai phân số
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
void NhapPhanSo(sPhanSo &pS)
{
	cout << "Nhap tu so: ";
	cin >> pS.nTuSo;
	do
	{
		cout << "Nhap mau so: ";
		cin >> pS.nMauSo;
		if (pS.nMauSo == 0)
		{
			cout << "Nhap sai: ";
		}
	} while (pS.nMauSo == 0);
}
void XuatPhanSo(sPhanSo pS)
{
	cout << pS.nTuSo << "/" << pS.nMauSo << endl;
}
int main()
{
	//khai bao
	sPhanSo sP1, sP2;
	cout << "Nhap phan so 1: " << endl;
	NhapPhanSo(sP1);
	cout << "Nhap phan so 2: " << endl;
	NhapPhanSo(sP2);
	cout << "Xuat Phan so 1 : " << endl;
	XuatPhanSo(sP1);
	cout << "Xuat phan so 2 : " << endl;
	XuatPhanSo(sP2);

	system("pause");
	return 0;
}

