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
#define MAX_LENGTH 100
struct sPhanSo //Kieu du lieu cau truc
{
	int nTuSo;
	int nMauSo;
};

int main()
{
	//khai bao
	sPhanSo pS;

	cout << "Nhap tu so: " << endl;
	cin >> pS.nTuSo;
	cout << "Nhap mau so: " << endl;
	cin >> pS.nMauSo;

	system("pause");
	return 0;
}
void NhapPhanSo(sPhanSo pS)
{
	cout << " Tu so: ";
	cin >> 

}