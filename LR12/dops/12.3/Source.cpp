#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	char str[255];
	cout << "���� ������ = ";
	gets_s(str);
	_strrev(str);
	cout << "������ � �������� ������� = " << str;
}
