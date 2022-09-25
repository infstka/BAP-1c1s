#include <iostream>
void main() 
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	const int SizeMax = 50;
	int k[SizeMax], i = 0, j = 0, l, a, pmin = 0, sum = 0, min = 0;
	cout << "¬ведите длину массива" << endl;
	cin >> l;
	for (i = 0; i < l; i++)
	{ 
		cin >> k[i];
		sum += k[i];
	}
	a = sum / l;
	cout << " " << endl;
	i = 0;
	min = k[0];
	for (i = 0; i < l; i++) 
	{
		if (k[i] <= min) 
		{
			min = k[i];
		}
	}
	i = 0;
	while (i < l) 
	{
			if (k[i] == min) {
				for (i; i < l; i++) {
					k[i] = k[i + 1];
				} l--; continue;
			} i++;
	}
	i = 0;
	for (i = 3 + 3; 
		i >= 0; i--) 
	{
		k[i+3] = k[i]; 
	}
	k[0] = k[1] = k[2] = a; 
	for (i = 0; i < l +3; i++)
	{ 
	   cout << k[i] << endl;
	} 
}
