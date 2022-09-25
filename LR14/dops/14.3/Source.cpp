#include <iostream>
#include <locale>
using namespace std;

int main()
{
	int row, col;
	cout << "row = ";
	cin >> row;
	cout << "col = ";
	cin >> col;
	float** parr = new float* [row];
	for (int i = 0; i < row; i++)
		parr[i] = new float[col];
	srand((unsigned)time(NULL));
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			parr[i][j] = rand() % 41 - 10;
			cout.width(2);
			cout << parr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (parr[i][j] < 0)
			{
				for (int l = 0; l < row; l++)
				{
					parr[l][i] /= 2;
				}
				cout << "RowNum = " << ++i << endl;
				for (int l = 0; l < row; l++)
				{
					for (int n = 0; n < col; n++)
					{
						cout.width(2);
						cout << parr[l][n] << " ";
					}
					cout << endl;
				}
				goto denis;
			}
		}
	}
denis:;
	for (int i = 0; i < row; i++)
		delete[] parr[i];
	delete[] parr;
	return 0;
}
