#include<iostream>
using namespace std;
void main() 
{
	setlocale(LC_CTYPE, "Russian");
	float p, q, r, a, g, h;
	cout << "������� ������ ����" << endl;
	cin >> r;
	cout << "������� ��������� �������������� ���������" << endl;
	cin >> p >> q;
	a = sqrt(pow(p, 2) + pow(q, 2)) / 2;
	g = (0.5 * q + 0.5 * p + a) * 0.5;
	h = (2 / a) * sqrt(g * (g - a) * (g - 0.5 * q) * (g - 0.5 * p));
	if (h >= r) 
	{
		cout << "��� ������� � ���������";
	}
	else cout << "��� �� ������� � ���������";
}