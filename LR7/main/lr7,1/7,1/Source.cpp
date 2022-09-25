#include <iostream>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	int m = 5, i;
	float x, z = 0;
	for (i = 1; i <=5; i++)
	{
		cout << "¬ведите x" << i << " " << endl;
		cin >> x;
		z = 8 * pow(x, 3) + z * pow(x - 2, 2);
	}
	cout << "z = " << z;
}