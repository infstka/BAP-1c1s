#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int A, pos = 0, maskA = 0x1fff;
	char tmp[33];
	cout << "���� �����: "; 
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << tmp << " " << "- �����" << endl;
	A = A ^ maskA;
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
}