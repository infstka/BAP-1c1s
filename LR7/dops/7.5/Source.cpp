#include<iostream>
#include<ctime>
using namespace std;
void main()
{
	srand(time(NULL));
	const int SIZE = 20;
	int arr_1[SIZE];
	int sum = 0, n = 0;

	for (int i = 0; i < SIZE; i++)
	{
		arr_1[i] = rand();
		cout << arr_1[i] << endl;
		if (i % 2 == 0)
		{
			sum += arr_1[i];
			n++;
		}
	}
	cout << endl << endl;
	cout << sum / n << endl;
}
