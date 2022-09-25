#include <iostream>
#include <ctime>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int SizeMas = 100;
	int l, MaxRand = 99, masL = 0, masM = 0, i;
	cout << "ввод размера массива = " << endl;
	cin >> l;
	int K[SizeMas], L[SizeMas], M[SizeMas];
	srand((unsigned)time(NULL));
	for (i = 0; i < l; i++)
	{
		K[i] = int(rand() % MaxRand);
	}
	for (i = 0; i < l; i++)
	{
		if (K[i] % 2 == 0)
		{
			L[masL] = K[i];
			masL++;
		}
		else
		{
			M[masM] = K[i];
			masM++;
		}
	}
	cout << "длина массива четных чисел = " << masL << endl;
	cout << "длина массива нечетных чисел = " << masM << endl;
}