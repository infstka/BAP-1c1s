#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float a = 5, b = 11, n = 200, s, x, h;
	h = (b - a) / n;
	x = a;
	s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + h * (exp(x) + 2 + exp(x + h) + 2) / 2;
		x = x + h;
		if (x > (b - h))
		{
			cout << "метод трапеций: " << s << endl;
		}
	}
}