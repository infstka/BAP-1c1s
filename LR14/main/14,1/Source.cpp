#include <iostream>
#include <stdio.h>
 using namespace std; 

 void massiv();
 void matrix();
 void main(void) 
 {
 setlocale(LC_ALL, "Russian");
 int task; 
do
{
 cout << "Введите" << endl; 
 cout << "1-одномерный массив" << endl;
 cout << "2-работа с матрицей" << endl;
 cout << "3-выход" << endl;
 cin >> task;
 switch (task)
 {
 case 1: massiv();
 break; 
 case 2: matrix();
 break;
 case 3: break; 
 }
}
while (task != 3); 
 }
 void massiv()
 {
	 int n, k = 0, multy = 1, sum = 0;
	 cout << "Введите размер массива\n";
	 cin >> n;
	 int* A = new int[n];
	 cout << "Введите элементы массива\n";
	 for (int i = 0; i < n; i++)
	 {
		 cin >> A[i];
		 if (A[i] >= 0)
		 {
			 sum += A[i];
		 }
		 else multy *= A[i];
	 }
	 printf("Произведение отрицательных элементов %d\n", multy);
	 printf("Сумма положительных элементов %d\n", sum);
 }
 void matrix() 
 {
	 int m = 4, n = 4, temp;
	 int min_sum = 0, max_sum = 0; 
	 int* A = new int[m * n];
	 cout << "Введите матрицу 4 x 4 (построчно)\n";
	 for (int i = 0; i < m; i++) 
	 {
		 for (int j = 0; j < n; j++)
		 {
			 cin >> A[i * j]; 
		 }
	 } 
	 for (int i = 0; i < m; i += 2)
	 {
		 for (int j = 0; j < n; j++) 
		 {
			 temp = max(A[i * j], temp);
		 } max_sum += temp;
	 }
	 for (int i = 1; i < m; i += 2)
	 {
		 for (int j = 0; j < n; j++)
		 {
			 temp = min(A[i * j], temp);
		 }
		 min_sum += temp;
	 }
	 printf("Сумма наименьших элементов нечетных строк мастрицы: %d\n", min_sum);
	 printf("Сумма наибольших элементов четных строк: %d\n", max_sum);
 }