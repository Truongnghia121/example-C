//Bài tập chương Câu lệnh lặp.Hàm nhận vào một
//số nguyên dương n và thực hiện :
//a.S = 1 + 2 + … + n //S = 1 + 2 + 3 + 4 + 5 = 15
//b.S = 1^2 + 2^2 + … + n^2 // S = 1^2 + 2^2 + 3^2 + 4^2 + 5^2 = 55
//c.S = 1 + 1 / 2 + … + 1 / n
//d.S = 1 * 2 * … * n
//e.S = 1!+ 2!+ … + n!
#include<iostream>
#include<cmath>
using namespace std;
int sTongA(int);		//hàm khai báo;
int sTongB(int);
float sTongC(int n);
int sTongD(int);
int sTongE(int n);

int main()
{
	int n;
	cout << "Nhap vao 1 so nguyen duong: ";
	cin >> n;
	cout << "S = 1 + 2 + n la : " << sTongA(n) << endl;
	cout << "S = 1^2 + 2^2 + n^2 la : " << sTongB(n) << endl;
	cout << "S = 1 + 1 / 2 + 1 / n la : " << sTongC(n) << endl;
	cout << "S = 1 * 2 * n la : " << sTongD(n) << endl;
	cout << "S = 1!+ 2!+ n! la : " << sTongE(n) << endl;


	system("pause");
	return 0;
}
// Định nghĩa hàm	
//a.S = 1 + 2 + … + n
int sTongA(int n)
{
	int sTongA = 0;
	while (n <= 0);
	{
		for (int i = 1; i <= n; i++)
		{
			sTongA += i; // Stong = sTong + i;
		}

	}
	return sTongA;
}
//Định nghĩa hàm
//b.S = 1^2 + 2^2 + … + n^2
int sTongB(int n)
{
	int sTongB = 0;
	while (n <= 0);
	{
		for (int i = 0; i <= n; i++)
		{
			sTongB += pow(i, 2);//pow là số mũ;
		}
	}
	return sTongB;
}
//Định nghĩa hàm
////c.S = 1 + 1 / 2 + … + 1 / n
float sTongC(int n)
{
	int i;
	float sTongC = 0;
	while (n <= 0);
	{
		for (i = 1; i <= n; i++)
		{
			sTongC = sTongC + 1.0 / i;
		}
	}
	return sTongC;
}
// Định nghĩa hàm
// d.S = 1 * 2 * … * n
int sTongD(int n)
{
	int sTongD = 1;
	while (n <= 0);
	{
		for (int i = 1; i <= n; i++)
		{
			sTongD = sTongD * i;
		}
	}
	return sTongD;
}
//e.S = 1!+ 2!+ … + n!
int sTongE(int n)
{
	int GT = 1;
	int sTongE = 0;
	while (n <= 0);
	{
		for (int i = 1; i <= n; i++)
		{
			GT = GT * i;
			sTongE = sTongE + GT;
		}
	}
	return sTongE;
}
