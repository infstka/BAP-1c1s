#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	float S, P, n, a;
	cout << "Введите a" << endl; 
	cout << "Введите n" << endl;
	cin >> a;
	cin >> n; 
	P = 2 * (a + a * n); 
	S = P;
	cout << "Площадь прямоугольника S = " << S << endl;
}