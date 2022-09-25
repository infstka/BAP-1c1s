#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	string string1, string2;
	int n = 0;
	cout << "Ввод строки 1 = ";
	getline(cin, string1);
	cout << "Ввод строки 2 = ";
	getline(cin, string2);
	cout << "Ввод номера позиции = ";
	cin >> n;
	if (n > size(string1))
	{
		cout << "Номер позициии больше чем размер строки = " << endl;
	}
	string1.insert(n, string2);
	cout << "Итог =" << string1 << endl;
}