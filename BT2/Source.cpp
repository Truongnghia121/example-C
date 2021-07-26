//Các thao tác nhập xuất
//a.Nhập mảng
//b.Xuất mảng
//2. Các thao tác kiểm tra
//a.Mảng có phải là mảng toàn chẵn
//b.Mảng có phải là mảng toàn số nguyên tố
//c.Mảng có phải là mảng tăng dần
#include<iostream>
#include<ctime>
using namespace std;
#define MAX_A 100 //Khai báo biến hằng có giá trị la 100
#define MAX_B 100

void NhapMang(int a[], int &n); //Khai báo hàm
//void NhapMangRanDum(int a[], int &n);
void XuatMang(int a[], int n);
bool KiemTraMangToanChan(int a[], int &n);
bool KiemTraSNT(int a[], int n);
int main()
{
	int	a[MAX_A];
	int nA;
	int b[MAX_B];
	int nB;
	cout << "Nhap mang A: " << endl;;
	NhapMang(a, nA);
	//NhapMangRanDum(a, nA);
	if (KiemTraMangToanChan(a, nA) == true)

	{
		cout << "Mang toan so chan: " << endl;
	}
	else
		cout << "Mang toan so khong phai la chan: " << endl;
	//
	/*if (KiemTraSNT(a, nA) == true)
	{
		cout << "Mang co toan SNT: " << endl;
	}
	else
	{
	cout << "Khong phai la SNT: " << endl;
	}*/
	cout << "Nhap mang B: " << endl;
	NhapMang(b, nB);
	//NhapMangRanDum(b, nB);
	if (KiemTraMangToanChan(b, nB) == true)

	{
		cout << "Mang toan so chan: " << endl;
	}
	else
	{
		cout << "Mang khong phai la so chan: " << endl;
	}
	//
	/*if (KiemTraSNT(b, nB) == true)
	{
		cout << "Mang co toan SNT: " << endl;
	}
	else
	{
		cout << "Khong phai la SNT: " << endl;
	}*/
	cout << "Xuat mang A: " << endl;
	XuatMang(a, nA);
	cout << "Xuat mang B: " << endl;
	XuatMang(b, nB);

	system("pause");
	return 0;
}
void NhapMang(int a[], int &n)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap mang [" << i << "] = ";
		cin >> a[i];
	}
}
void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		//cout << "Xuat mang [" << i << "] = " << a[i] << endl;
		if (i % 10 == 0) // khi chạy sẽ nhìn đẹp hơn
		{
			cout << endl;
		}
		cout << a[i] << "\t";
	}
}
//void NhapMangRanDum(int a[], int &n) // Nhanh gọn hơn
//{
//	cout << "Nhap so luong phan tu: ";
//	cin >> n;
//	srand (time(NULL)); // srand
//	for (int i = 0; i < n; i++)
//	{
//		//cout << "Nhap mang [" << i << "] = ";
//		a[i] = rand() % 1000 + 0; // rand 
//		//cin >> a[i];
//	}
//}
//a.Mảng có phải là mảng toàn chẵn
bool KiemTraMangToanChan(int a[], int &n)// hàm bool trả về true/false
{
	//srand(time(NULL)); // srand
	bool KT = true;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			KT = false;
			break;
		}
	}
	return KT;
}
//b.Mảng có phải là mảng toàn số nguyên tố
//bool KiemTraSNT(int a[], int n)// hàm bool trả về true/false
//{
//
//	if (n < 2)
//	{
//		return false;
//	}
//	for (int i = 2; i <= a[i] / 2; i++)
//	{
//		if (a[i] % 2 == 0)
//		{
//			return false;
//		}
//		else
//		{
//			return true;
//		}
//	}
//
//}
