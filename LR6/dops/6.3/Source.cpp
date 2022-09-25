#include<iostream>
void main()
{
	using namespace std;
	int i, a, b, c, d, sum;
	for (i = 1000; i <= 9998; i += 1) 
	{
		if (i % 2 == 0 and i % 7 == 0 and i % 11 == 0)
		{
			a = i / 1000;
			b = (i / 100) % 10;
			c = (i / 10) % 10;
			d = i % 10;
			sum = a + b + c + d; 
			if (sum == 30)
			{
				if ((a == b and c == d) 
					or (a == c and b == d)
					or (a == d and b == c) 
					or a == b == c 
					or b == c == d 
					or a == b == d
					or a == d == c) 
				{
					break; 
				}
			}
		}
	}
	cout << i; 
}