#include <iostream>
int main()
{
	using namespace std;
	double t, u, s, y = 0.956, a = 5e-6, n = 4;
	t = 1 / sqrt(y) + 14 * a;
	u = (t + 1) / (a + 2);
	s = 1 * n  * ((2 * n / 3) + exp(-n) / u);
	std::cout << "t" << t << endl;
	std::cout << "u" << u << endl;
	std::cout << "s" << s;
}
