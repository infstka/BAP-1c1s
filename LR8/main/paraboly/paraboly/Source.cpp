#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float a = 1, b = 6, n = 200, x, s1, s2, h, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	s1 = 0; s2 = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i < n)
		{
			s2 = s2 + (1 + pow(x, 3));
			x = x + h;
			s1 = s1 + (1 + pow(x, 3));
			x = x + h;
		}
		else
		{
			z = (h / 3) * ((1 + pow(x, 3)) + 4 * (1 + (pow(x, 3) + h)) + 4 * s1 + 2 * s2 + (1 + pow(x, b)));
			cout << "метод парабол:" << z << endl;
		}
	}
	
}