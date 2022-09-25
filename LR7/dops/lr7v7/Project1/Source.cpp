#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int n = 6, i;
	float a, b, c, d = 0;
	for (i = 1; i <= 6; i++)
	{
		cout << "¬ведите a" << i << "" << endl;
		cin >> a;
		cout << "¬ведите b" << i << "" << endl;
		cin >> b;
		c = sqrt(a + b);
		d = d + c / i;
	}
	cout << "d=" << d;
}