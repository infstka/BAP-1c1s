#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int y;
	cout << "���� ������ ����= ";
	cin >> y;
	if (!(y % 4) && (y & 100) || !(y & 400))
		cout << "��� ����������" << endl;
	else
		cout << "��� �� ����������" << endl;
}