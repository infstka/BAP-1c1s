#include<iostream>			
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");
	float p, q, a = 0.03, x;			
	int d = 0;

	cout << "������� ��������� ������� " << endl;
	cin >> p;
	cout << "������ ���������� ������� " << endl;
	cin >> q;
	while (p <= q)
	{
		x = p;
		p = p + (p * a);
		d += 1;
	}

	cout << "���-�� ���� - " << d << endl;
	cout << "������� � ��������� ���� - " << p - x << endl;
}
