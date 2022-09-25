#include <iostream>
using namespace std;
void main()
{
	float z, y, a, q, n, j = -1;
	a = 6, y = -1.55;
	while (j < 1.2)
	{
		z = sqrt(a + 1) - tan(j + y);
		q = exp(-j * 0.1 * y) + pow((3 * z), 2);
		cout << "j=" << j << "\t";
		cout << "q=" << q << endl;
		j = j + 0.2;
	}
}
