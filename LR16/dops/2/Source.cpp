#include <iostream>
#include <locale>

using namespace std;

void FindZero();
int SumOfNumbers(short N, int First, ...);

int main()
{
	setlocale(LC_CTYPE, "Russian");
	short Voice = 0;
	do {
		cout << "�������� ����� �������" << endl;
		cout << "1 - ����� ����� � ������� " << endl;
		cout << "2 - ����� ����� �� ������� " << endl;
		cout << "3 - �����" << endl;
		cin >> Voice;
		switch (Voice)
		{
		case 1: FindZero(); break;
		case 2: cout << SumOfNumbers(8, 1, 2, 5, 5, 3, 7, 4, 5) << endl; break;
		case 3: break;
		default: cout << "�����������" << endl;
		}
	} while (Voice != 3);
	return 0;
}

void FindZero()
{
	// �������� ����� ����� � �������
	short Rows = 0, Columns = 0;
	cout << "������� ���-�� ����� � ��������: " << endl;
	cin >> Rows >> Columns;
	short* Matrix = new short[Rows * Columns]; // ������� �������
	// ��������� ������ ���������� �������
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			*(Matrix + i * Columns + j) = rand() % 5;
			cout << *(Matrix + i * Columns + j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	// find zeros
	short Flag = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (*(Matrix + i * Columns + j) == 0)
			{
				Flag++;
				break;
			}
		}
	}
	if (Flag = Rows)
	{
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Columns; j++)
			{
				if (*(Matrix + i * Columns + j) < 0)
					*(Matrix + i * Columns + j) = 0;
			}
		}
	}
	// �����
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			cout << *(Matrix + i * Columns + j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	delete[] Matrix;
}

int SumOfNumbers(short N, int First, ...)
{
	int* Number = &First;
	int Formula = 0;
	while (N != 1)
	{
		int temp = *Number; // ������� ��-�� ����������� ++, ������� �� ��������� ���� �����������
		int temp_2 = *(++Number); // pow(-1, N) * (*Number) * (*(++Number))
		Formula += pow(-1, N) * temp * temp_2;
		N--;
	}
	return Formula;
}