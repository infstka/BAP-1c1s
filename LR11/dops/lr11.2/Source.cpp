#include <iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, k;
	cout << "���� ������� ������� n = ";
	cin >> n;
	int* A = new int[n];
	srand(time(NULL));
	cout << "������ � =   ";
	for (int i = 0; i < n; i++)
	{
		A[i] = rand();
		cout << A[i] << " " << endl;
	}
	cout << "���� ����� k = ";
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		if (A[i] == k)
			cout << "������ ���������, ������ k = " << i << endl;
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i] > k)
			cout << "������ ���������, ��� ������ k = " << i << endl;
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i] < k)
			cout << "������ ���������, ��� ������ k = " << i << endl;
	}
}
