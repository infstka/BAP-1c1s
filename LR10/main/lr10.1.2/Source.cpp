#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	unsigned A, p, n, mask;
	cout << "p: ";
	cin >> p;
	cout << "n: ";
	cin >> n;
	cout << "A: ";
	cin >> A;
    mask = (1u << n) - 1;
	mask <<= p;
	A ^= mask; 
	cout << A;
}