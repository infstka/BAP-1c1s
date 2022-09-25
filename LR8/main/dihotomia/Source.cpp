#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float a = 1, b = 6, e = 0.0001, x, fx, fa;
	do
	{
		x = (a + b) / 2;
		fx = pow(x, 3) + 2 * x - 1;
		fa = pow(a, 3) + 2 * a - 1;
		if (fx * fa <= 0)
		{
			b = x;
		}
		else
		{
			a = x;
		}
	} while (abs(a - b) > 2 * e);
	cout << "метод дихотомии: " << x << endl;
}