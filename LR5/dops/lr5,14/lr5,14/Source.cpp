#include <iostream>
using namespace std;
void main()
{
	float v, u, b, m, w, e, k = 3;
	b = -5.4, m = 4, u = 0.05e-4;
	while (k < 4.2)
	{
		v = u + b - 2 * sqrt(0.7 * k + m);
		w = 100 * exp(-0.2 * u) - log(8.1 * u);
		cout << "k=" << k << "\t";
		cout << "w=" << w << endl;
		k = k + 0.2;
	}
}
