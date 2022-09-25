#include <iostream>
#include <locale>

using namespace std;

void Matrix();
int Minimum(int N, int First, ...);
double Minimum(double N, double First, ...);

int main()
{
	setlocale(LC_CTYPE, "Russian");
	short Change = 0;
	do {
		cout << "�������� ����� �������: " << endl;
		cout << "1 - ����� ������������� ������ � ����� ��������� ���� ������" << endl;
		cout << "2 - ����� ������� � �������� ������������������" << endl;
		cin >> Change;
		switch (Change)
		{
		case 1: Matrix(); break;
		case 2: cout << Minimum(3, 1, 2, 7) << endl; break;
		case 3: break;
		default: cout << "������� ����� �� 1 �� 3";
		}
	} while (Change != 3);
	return 0;
}

void Matrix()
{
	short Rows = 0, Columns = 0;
	cout << "������� ���-�� ������� � ���-�� ��������: " << endl;
	cin >> Rows >> Columns;
	// �������� � ���������� �������
	short* Matrix = new short[Rows * Columns];
	srand((unsigned)time(NULL));
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			*(Matrix + i * Columns + j) = rand() % 6 - 3;
			cout << *(Matrix + i * Columns + j) << " ";
		}
		cout << endl;
	}
	cout << endl;
	// ����� ������������� ������
	short Flag = 0, Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Columns; j++)
		{
			if (*(Matrix + i * Columns + j) > 0)
				Flag++;
		}
		if (Flag == Rows) {
			Flag = i;
			for (short i = 0; i < Columns; i++)
			{
				Sum += *(Matrix + Flag * Columns + i);
			}
			break;
		}
		else
			Flag = 0;
	}
	if (Sum != 0)
	{
		cout << "����� ���������: " << Sum << endl;
		for (short i = 0; i < Rows; i++)
		{
			for (short j = 0; j < Columns; j++)
			{
				*(Matrix + i * Columns + j) -= Sum;
			}
		}
	}
	else
		cout << "������������� ������ �� �������" << endl;
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
}

int Minimum(int N, int First, ...)
{
	int* p = &First;
	int Min = *p;
	while (N)
	{
		if (Min > * (++p))
			Min = *p;
		N--;
	}
	return Min;
}

double Minimum(double N, double First, ...)
{
	double* p = &First;
	double Min = *p;
	while (N)
	{
		if (Min > * (++p))
			Min = *p;
		N--;
	}
	return Min;
}