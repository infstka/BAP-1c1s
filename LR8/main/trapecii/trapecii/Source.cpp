#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	double a = 1, b = 6, n = 200, x, s, h;
	h = (b - a) / n;
	x = a;
	s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + h * (1 + pow(x, 3) + 1 + pow(x + h, 3)) / 2;
		x = x + h;
		if (x > (b - h))
		{
			cout << "метод трапеций: " << s << endl;
		}
	}
}
