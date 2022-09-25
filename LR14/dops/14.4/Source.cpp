#include <iostream>
#include <locale>
using namespace std;

int main()
{
	int k, count = 0, sum = 0;
	cout << "k = ";
	cin >> k;
	int* parr = new int[k];
	srand((unsigned)time(NULL));
	for (int i = 0; i < k; i++)
	{
		parr[i] = rand() % 3 - 1;
		cout << parr[i] << "  ";
	}
	cout << endl;
	for (int i = 0; i < k; i++)
	{
		if (parr[i] != 0)
		{
			count++;
			sum += parr[i];
		}
		else
		{
			count = 0;
			sum = 0;
		}
	}
	cout << "sum =\t" << sum << "\ncount =\t" << count;
	delete[] parr;
	return 0;
}
