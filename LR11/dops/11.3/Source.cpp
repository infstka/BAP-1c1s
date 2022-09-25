#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	const int n = 100;
	int A[n], i, bma = 0, tmp = 0;
	int B[n], bba = 0;
	int  sz;
	srand((unsigned)time(NULL));
	int* size;
	size = &sz;
	cout << " ввод размера массива A = ";
	cin >> sz;
	cout << "массив A = ";
	srand((unsigned)time(NULL));
	for (i = 0; i < *size; i++)
	{
		A[i] = rand() % 100;
		cout << *(A + i) << " ";
	}
	cout << endl;
	cout << "массив В = ";
	for (i = 0; i < *size; i++)
	{
		B[i] = rand() % 100;
		cout << *(B + i) << " ";
	}
	for (i = 0; i < *size; i++)
	{
		if (B[i] == A[i])
		{
			tmp++;
		}
		if (B[i] < A[i])
		{
			bma++;
		}
		if (B[i] > A[i])
		{
			bba++;
		}
	}
	cout << endl;
	cout << "А равно В =  " << tmp++ << endl;
	cout << "А больше В = " << bma++ << endl;
	cout << "A меньше В = " << bba++ << endl;
	return 0;
}
