#include <iostream>
#include <time.h>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	const int N = 10;
	int i, s, m = 0, A[N];
	float c = 0, a, sr;
	cout << "ввод размера массива = ";
	cin >> s;
	cout << "массив А = ";
	srand(time(NULL));
	for (i = 0; i < s; i++)
	{
		A[i] = rand() % 99;
		cout << A[i] << " ";
	}
	cout << endl;
	for (i = 0; i < s; i++)
	{
		c += A[i];
		sr = c / s;
	}
	for (i = 1; i < s; i++)
		if (abs(sr - A[i]) < abs(sr - A[0]))
		{
			a = abs(sr - A[i]);
			m = i;
		}
	cout << "среднее арифметическое эл-ов массива = " << sr << endl;
	cout << "наиб. близкое к ср.арифм. значение = " << A[m];
}