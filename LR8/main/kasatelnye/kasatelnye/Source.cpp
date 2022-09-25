#include <iostream>
#include <math.h>
using namespace std;
void main()
{	float a = 1, b = 6, e = 0.0001 , x, f1, f2, x1;
	setlocale(LC_CTYPE, "Russian");
	x1 = a;
	f1 = pow(a, 3) + 2 * a - 1;
	f2 = 3 * pow(a, 2) + 2;
	if (f1 * f2 > 0)
		x1 = a;
	else
		x1 = b;
	do
	{
		x = x1;
		x1 = x - ((pow(x, 3) + 2 * x - 1) / (3 * pow(a, 2) + 2));
} while (abs(x1 - x > e));
	cout <<"метод касательных: "<< x << endl;
}