#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int size;
	cout << "размер = ";
	cin >> size;
	int* parr = new int[size];
	srand((unsigned)time(NULL));
	for (int i = 0; i < size; i++)
	{
		parr[i] = rand() % 20;
		cout << parr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		if (parr[i] == 0)
		{
			cout << "k = " << i << endl;
			break;
		}
	}
	delete[] parr;
	return 0;
}
