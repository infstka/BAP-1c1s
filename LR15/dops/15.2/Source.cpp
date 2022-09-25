#include <iostream>
float integ(float(*) (float), float, float, float);
float f(float);
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	float z, a, b, h;
	cout << "пределы:" << endl;
	cin >> a;
	cin >> b;
	cout << "точность:" << endl;
	cin >> h;
	z = integ(f, (float)a, (float)b, (float)h);
	std::cout << "Integral=" << z;
}
float integ(float(*f) (float), float a, float b, float h)
{
	float x, s = 0.0;
	x = a + h;
	while (x <= b)
	{
		s += h * f(x);
		x = x + h;
	}
	return s / 2;
}

float f(float x)
{
	return (2 + 3 * x);
}
