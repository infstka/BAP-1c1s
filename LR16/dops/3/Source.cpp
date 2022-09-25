#include <iostream>
#include <locale>

using namespace std;

void Matrix();
double MinimumOfTheRow(double N, double First, ...);
int MinimumOfTheRow(int N, int First, ...);

int main()
{
	setlocale(LC_CTYPE, "Russian");
	short Voice = 0;
	do {
		char* Sentence = new char[256];
		cout << "Выберите номер задания: " << endl;
		cout << "1 - Найти строку с отрицательными элементами" << endl; // и поделить столбец на 2
		cout << "2 - Нахождение минимального из чисел" << endl;
		cin >> Voice;
		switch (Voice)
		{
		case 1: Matrix(); break;
		case 2: cout << MinimumOfTheRow(5, 14, 1, 4, 2, 0) << endl; break;
		case 3: break;
		}
	} while (Voice != 3);
	return 0;
}

void Matrix()
{
	// инициализация массива
	short Rows = 0, Columns = 0; // строки, солбцы
	cout << "Введите размеры массива (строки, столбцы):";
	cin >> Rows >> Columns;
	double* Matrix = new double[Rows * Columns];
	// заполнение
	srand((unsigned)time(NULL));
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			*(Matrix + i * Columns + j) = (rand() % 10) - 5;
			cout << *(Matrix + i * Columns + j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	// поиск отрицательной строки
	short Temporary = 0;
	for (short i = 0; i < Rows; i++)
	{
		short Counter = 0;
		for (short j = 0; j < Columns; j++)
		{

			if (*(Matrix + j * Columns + i) < 0)
			{
				Counter++;
			}
			else
			{
				Counter = 0;
			}
		}
		if (Counter == Rows)
		{
			Temporary = i;
			cout << "Столбец состоящий из отрицательных элементов:" << Temporary << endl;
			i = Rows;
		}
	}
	// Нахождение среднего арифметического строки
	double Average = 0;
	for (short i = 0; i < Rows; i++)
	{
		Average += *(Matrix + Temporary * Columns + i);
	}
	Average /= Rows;
	cout << "Среднее арифметичсекое: " << Average << endl;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			*(Matrix + i * Columns + j) -= Average;
			cout << *(Matrix + i * Columns + j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	delete[] Matrix;
}

double MinimumOfTheRow(double N, double First, ...)
{
	double* D = &First;
	double* Min = &First;
	while (N--)
	{
		if (*(++D) < *Min)
			*Min = *D;
	}
	return *Min;
}

int MinimumOfTheRow(int N, int First, ...)
{
	int* U = &First;
	int* Min = &First;
	while (N--)
	{
		if (*Min > * (++U))
			*Min = *U;
	}
	return *Min;
}