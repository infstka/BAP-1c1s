#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, sum = 0;
	while (true)
	{
		cout << "���� ����� ";
		cin >> a;
		if (a == 0)
			break;
		{
			if (a % 2 == 0)
			{
				sum += a;
			}
		}
	}
	cout << "����� ������� ��������� = ";
	cout << sum;
}