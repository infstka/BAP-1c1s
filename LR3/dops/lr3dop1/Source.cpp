#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;
void main()
{
		setlocale(LC_CTYPE, "Russian");
		using namespace std;
		char a, b; b = ' ';
		cout << "Введите символ "; cin >> a;
		cout << setw(45) << setfill(b) << b;
		cout << setw(20) << setfill(a) << a << endl;
		cout << setw(44) << setfill(b) << b;
		cout << setw(22) << setfill(a) << a << endl;
		cout << setw(43) << setfill(b) << b;
		cout << setw(24) << setfill(a) << a << endl;
		cout << setw(42) << setfill(b) << b;
		cout << setw(26) << setfill(a) << a << endl;
		cout << setw(41) << setfill(b) << b;
		cout << setw(28) << setfill(a) << a << endl;
		cout << setw(40) << setfill(b) << b;
		cout << setw(30) << setfill(a) << a << endl;

}