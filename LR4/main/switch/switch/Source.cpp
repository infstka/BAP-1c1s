#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a;
	cout << "������� �� �� � ����? (1 - �� 2 - ���)" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		puts("�� ����� ���������� �� ������� ? (1 - ���, 2 - �����, 3 - ����)");
		cin >> a;
		switch (a)
		{
		case 1: puts("�������� �����");break;
		case 2: puts("�������");break;
		case 3: puts("�����!");
			break;
		}
		break;
	}
	case 2: puts("����� ��������� ������, ��� �� �������"); break;
	default: puts("������������ �������"); break;
	}
	return 0;
}