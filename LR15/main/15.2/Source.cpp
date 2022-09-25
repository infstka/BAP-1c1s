#include<iostream>
using namespace std;
void del(char* string);
void main() {
	setlocale(LC_ALL, "Russian");

	int k, n;
	char* str = new char[256];
	cout << "Введите строку\n";
	cin >> str;
	del(str);
}

void del(char* string) {

	using namespace std;
	setlocale(LC_ALL, "Russian");

	char* buffer = new char[256];

	for (int i = 0; i <= 256; i++) {
		if (string[i] == 'b')
		{
			string[i] = ' ';
		}
	}

	cout << "Итоговая строка:\t";

	for (int i = 0; i <= 256; i++) {
		cout << string[i];
	}
}
