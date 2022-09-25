#include <iostream>
int main()
{
	using namespace std;
	int m = 4, i = 7;
	double s, p, a = 105e-4, x;
	for (int x = 1; x <= 3; x++)
	{  
		s = (-a * x) - log(i / x * m) / log(m);
		if (s > 2 * x)
		{
			p = pow(-i * s, 2);
		}
		else
			if (s <= 2 * x)
				p = sin(-6 * s);
	}
	cout << p;
}