#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int answer = 0;
	double p, q;
	cout << "� ������ ���� ����� ����������� ������ �� (P)";
	cin >> p;
	cout << "����� �������� (Q)";
	cin >> q;
	while (p < q)
	{
		p *= 1.03;
		answer++;
	}
	cout << answer;
}