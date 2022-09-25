#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	float S, P, n, a, b;
	cout << "¬ведите a" << endl; // вывод текста
	cout << "¬ведите b" << endl;
	cout << "¬ведите n" << endl;
	cin >> a;
	cin >> b;
	cin >> n; // рассичитываем по формуле радиус
	P = 2 * (a + b * n); // расчитываем по формуле радиус
	S = P; // расчитываем площадь по формуле
	cout << "ѕлощадь пр€моугольника S = " << S << endl;
}