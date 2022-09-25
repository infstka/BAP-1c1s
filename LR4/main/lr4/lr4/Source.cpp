#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	float a, b, c, d, G, A;
	printf("¬ведите a "); scanf_s("%f", &a);
	printf("¬ведите b "); scanf_s("%f", &b);
	printf("¬ведите c "); scanf_s("%f", &c);
	d = (a * b * c);
	G = pow(d, 1.0 / 3);
	std::cout << "G = " << G << endl;
	printf("¬ведите a "); scanf_s("%f", &a);
	printf("¬ведите b "); scanf_s("%f", &b);
	printf("¬ведите c "); scanf_s("%f", &c);
	A = (a + b + c) / 3;
	std::cout << "A = " << A << endl;
}