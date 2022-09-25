#include <iostream>
#include <cmath>
void main()
{
	using namespace std;
	float x = 1.4, m = 6, z = 0.005 * pow(10,-5), y, w;
	y = sqrt(1 + x) - cos(2 / m);
	w = 0.6 * z - 2 * exp(-2 * y * m);
		cout << "y = " << y << endl << "w = " << w;
	
}