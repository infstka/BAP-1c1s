#include<iostream>
using namespace std;
void main() 
{
	setlocale(LC_CTYPE, "Russian");
	float p, q, r, a, g, h;
	cout << "¬ведите радиус шара" << endl;
	cin >> r;
	cout << "¬ведите диагонали ромбообразного отверсти€" << endl;
	cin >> p >> q;
	a = sqrt(pow(p, 2) + pow(q, 2)) / 2;
	g = (0.5 * q + 0.5 * p + a) * 0.5;
	h = (2 / a) * sqrt(g * (g - a) * (g - 0.5 * q) * (g - 0.5 * p));
	if (h >= r) 
	{
		cout << "Ўар пройдет в отверстие";
	}
	else cout << "Ўар не пройдет в отверстие";
}