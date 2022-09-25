#include<iostream>
using namespace std;
float tangent(float a, float b, float e); 
float dichotomy(float a, float b, float e);
float equation(float x);
void main() {
	setlocale(LC_ALL, "Russian");
	int task;
	float a, b, e;
	do {
		cout << "\nВыберите метод решения уравнения\n";
		printf("1. Касательные\n2. Дихотомия\n3. Выход\n");
		cin >> task;
		if (task == 3) break;
		cout << "Введите а и b:\n";
		cin >> a;
		cin >> b;
		cout << "Введите точночть вычислений e: ";
cin >> e; switch (task)
{
case 1: cout << "Корень: " << tangent(a, b, e);
break; 
case 2: cout << "Корень: " << dichotomy(a, b, e); 
	break;
}
	}
	while (true);
} 
float equation(float x)
{
	return(cos(x) + x - 7);
}
float tangent(float a, float b, float e) 
{
	setlocale(LC_CTYPE, "Russian");
	float x, x1;
	if (equation(a) * (-cos(a)) > 0)
	{
		x1 = a; 
	}
	else {
		x1 = b;
	} 
	do
	{
		x = x1;
		x1 = x - equation(x) / (-sin(x) + 1);
	}
	while (abs(x1 - x) > e);
	return x1;
	}
float dichotomy(float a, float b, float e) 
{ 
	setlocale(LC_CTYPE, "Russian");
	float x; 
	do { x = (a + b) / 2;
	if (equation(x) * equation(a) <= 0) 
	{ 
		b = x;
	}
	else 
	{
		a = x; 
	}
	}
	while (abs(a - b) > 2 * e);
	return x; 
}
