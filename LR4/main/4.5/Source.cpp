#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int y;
	cout << "Ввод номера года= ";
	cin >> y;
	if (!(y % 4) && (y & 100) || !(y & 400))
		cout << "Год високосный" << endl;
	else
		cout << "Год не високосный" << endl;
}