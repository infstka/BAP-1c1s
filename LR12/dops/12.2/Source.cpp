#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	string string1, string2;
	int n = 0;
	cout << "���� ������ 1 = ";
	getline(cin, string1);
	cout << "���� ������ 2 = ";
	getline(cin, string2);
	cout << "���� ������ ������� = ";
	cin >> n;
	if (n > size(string1))
	{
		cout << "����� �������� ������ ��� ������ ������ = " << endl;
	}
	string1.insert(n, string2);
	cout << "���� =" << string1 << endl;
}