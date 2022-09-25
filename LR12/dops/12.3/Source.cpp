#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	char str[255];
	cout << "ввод строки = ";
	gets_s(str);
	_strrev(str);
	cout << "строка в обратном порядке = " << str;
}
