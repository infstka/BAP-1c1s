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
		cout << "�������� ����� �������: " << endl;
		cout << "1 - ����� ������ � �������������� ����������" << endl; // � �������� ������� �� 2
		cout << "2 - ���������� ������������ �� �����" << endl;
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
	// ������������� �������
	short Rows = 0, Columns = 0; // ������, ������
	cout << "������� ������� ������� (������, �������):";
	cin >> Rows >> Columns;
	double* Matrix = new double[Rows * Columns];
	// ����������
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
	// ����� ������������� ������
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
			cout << "������� ��������� �� ������������� ���������:" << Temporary << endl;
			i = Rows;
		}
	}
	// ���������� �������� ��������������� ������
	double Average = 0;
	for (short i = 0; i < Rows; i++)
	{
		Average += *(Matrix + Temporary * Columns + i);
	}
	Average /= Rows;
	cout << "������� ��������������: " << Average << endl;
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