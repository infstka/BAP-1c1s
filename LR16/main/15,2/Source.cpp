#include <iostream>
int fsum(int n, ...)
{
	int* p = &n;
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		int mult = (*(p + i)) * (*(p + i + 1));
		sum += mult;
	}
	return sum;
}
void main() 
{
	std::cout << fsum(8, 2, 4, 0, 1, 6, 6, 2, 8) << std::endl;
	std::cout << fsum(3, 1, 5, 3); 
}