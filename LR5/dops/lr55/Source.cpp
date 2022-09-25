#include<iostream>			
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");
	float p, q, a = 0.03, x;			
	int d = 0;

	cout << "Введите начальную прибыль " << endl;
	cin >> p;
	cout << "Введие предельную прибыль " << endl;
	cin >> q;
	while (p <= q)
	{
		x = p;
		p = p + (p * a);
		d += 1;
	}

	cout << "Кол-во дней - " << d << endl;
	cout << "Прибыль в последний день - " << p - x << endl;
}
