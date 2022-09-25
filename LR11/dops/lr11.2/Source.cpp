#include <iostream>
#include<ctime>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int n, k;
	cout << "ввод размера массива n = ";
	cin >> n;
	int* A = new int[n];
	srand(time(NULL));
	cout << "массив А =   ";
	for (int i = 0; i < n; i++)
	{
		A[i] = rand();
		cout << A[i] << " " << endl;
	}
	cout << "ввод числа k = ";
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		if (A[i] == k)
			cout << "номера элементов, равные k = " << i << endl;
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i] > k)
			cout << "номера элементов, что больше k = " << i << endl;
	}
	for (int i = 0; i < n; i++)
	{
		if (A[i] < k)
			cout << "номера элементов, что меньше k = " << i << endl;
	}
}
