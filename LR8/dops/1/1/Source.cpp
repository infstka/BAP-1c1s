#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float a = 1, b = 3, n = 200, s, h, x;
	h = (b - a) / n;
	x = a;
	s = 0;
	for (int i = 1; i <= n; i++)
	{
		s = s + h * (pow(x, 3) - 3 + pow(x + h, 3) - 3) / 2;
		x = x + h;
		if (x > (b - h))
		{
			cout << "метод трапеций: " << s << endl;
		}
	}
}
