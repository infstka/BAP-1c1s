#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	float a = 1, b = 3, n = 200, x, h, z, s1, s2;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	s1 = 0;
	s2 = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i < n)
		{
			s2 = s2 + (pow(x, 3) - 3);
			x = x + h;
			s1 = s1 + (pow(x, 3) - 3);
			x = x + h;
		}
		else
		{
			z = (h / 3) * ((pow(a, 3) - 3) + 4 * (pow(a + h, 3) - 3) + 4 * s1 + 2 * s2 + (pow(b, 3) - 3));
			cout << "метод парабол: " << z << endl;
		}
	}
}