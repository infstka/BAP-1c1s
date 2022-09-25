#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "rus");
	int dz1, dz2, sum, k;
	k = 1;
	sum = 0;
	cout << "Введите диапазон последовательности" << endl;
	cout << "Начало = ";
	cin >> dz1;
	cout << "Конец = ";
	cin >> dz2;
	for (int i = dz1; i <= dz2; i++)
	{
		if (k == 1)
		{
			k++;
		}
		else
		{
			sum = sum + i;
			k = 1;
		}
	}
	cout << sum << endl;
}
