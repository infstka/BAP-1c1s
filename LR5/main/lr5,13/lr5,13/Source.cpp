#include <iostream>
#include <iomanip> 
using namespace std;
void main()
{
	int y, a, j;
	printf("Enter j: ");
	scanf_s("%d", &j);
	for (y = 0.9; y <= j; y++)
	{
		for (a = 1; a <= n; a++)
			printf("%5d", a * y);
		if (y == 0.9)
		{
			cout << endl;
			cout << setw(3.3 * n) << setfill('-') << '-' << endl;
		}
		printf("\n");
	}
}

