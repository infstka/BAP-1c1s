#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	float S, P, n, a, b;
	cout << "������� a" << endl; // ����� ������
	cout << "������� b" << endl;
	cout << "������� n" << endl;
	cin >> a;
	cin >> b;
	cin >> n; // ������������� �� ������� ������
	P = 2 * (a + b * n); // ����������� �� ������� ������
	S = P; // ����������� ������� �� �������
	cout << "������� �������������� S = " << S << endl;
}