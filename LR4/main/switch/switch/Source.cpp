#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int a;
	cout << "Учитесь ли вы в БГТУ? (1 - да 2 - нет)" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
	{
		puts("На каком факультете вы учитесь ? (1 - ФИТ, 2 - ФХТиТ, 3 - ФТОВ)");
		cin >> a;
		switch (a)
		{
		case 1: puts("Отличный выбор");break;
		case 2: puts("Неплохо");break;
		case 3: puts("Супер!");
			break;
		}
		break;
	}
	case 2: puts("Будет интересно узнать, где ты учишься"); break;
	default: puts("Некорректный вариант"); break;
	}
	return 0;
}