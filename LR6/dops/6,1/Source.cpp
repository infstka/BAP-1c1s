#include <iostream>
using namespace std;
void main() 
{
	setlocale(LC_CTYPE, "Russian");
	double c1, c2;
	cout << "������� ���� ���� � ������ ������? ������� ���� ���� �� ������ ������? " << endl;
	cin >> c1 >> c2;
	for (int i = 0; i < 12; i++)
	{
		c2 += 0.5 * c1;
		c1 *= 0.5;
		c1 += 0.5 * c2;
		c2 *= 0.5;
	} 
	cout << "� ������ " << c1 << " �� ������ " << c2; 
}