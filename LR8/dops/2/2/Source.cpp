#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	double a = 8, b = 12, n = 200, s, h, x;
	h = (b - a) / n;
	x = a;
	s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + h * (5 - pow(x, 2) + 5 - pow(x + h, 2)) / 2;
		x = x + h;
		if (x > (b - h))
		{
			cout << "метод трапеций: " << s << endl;
		}
	}
}
