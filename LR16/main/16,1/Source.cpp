#include<iostream>
void get_matrix(int* A, int m, int n);
int func(int* A, int m, int n);
void main()
{
setlocale(LC_CTYPE, "Russian");
using namespace std; 
int m, n;
cout << "Введите размеры матрицы m*n: \n";
cin >> m >> n;
int* A = new int[m * n];
cout << "Введите матрицу (построчно)\n";
get_matrix(A, m, n);
cout << "Количество строк, содержащих хотя бы один нулевой элемент: ";
cout << func(A, m, n);
}
void get_matrix(int* A, int m, int n)
{
	for (int i = 0; i < m; i++) 
	{
		for (int j = 0; j < n; j++)
		{
			std::cin >> *(A + i * n + j);
		}
	}
}
int func(int* A, int m, int n)
{
	 int counter = 0;
	 for (int i = 0; i < m; i++)
	 { 
		 for (int j = 0; j < n; j++)
		 { 
			 if (*(A + i * n + j) == 0)
			 {
				 counter += 1;
				 break;
			 }
		 }
	 }
	 return counter; 
}
