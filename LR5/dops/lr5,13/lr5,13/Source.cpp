#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	float v, u, b, k, m, w, e;
	b = -5.4, m = 4, u = 0.05e-4;
	for (int n = -7; n <= 6; n++)
	{
		printf("¬ведите k ");
		scanf_s("%f", &k);
		v = u + b - 2 * sqrt(0.7 * k + m);
		w = 100 * exp(-0.2 * u) - log(8.1 * u);
		printf("k = %5.2f\t", k);
		printf("w = %5.2f\n", w);
	}
}