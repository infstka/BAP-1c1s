#include <iostream>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int k;
	puts("Вы учащийся БГТУ? (1-да, 2-нет)");
	std::cin >> k;
	switch (k)
	{
	case 1: { puts("На каком факультете вы учитесь? (1- ФИТ, 2-ФХТиТ, 3-ФТОВ)");
		std::cin >> k;
		switch (k)
		{
		case 1: puts("Хороший выбор!"); break;
		case 2: puts("Неплохо"); break;
		case 3: puts("Так держать!");
			break;
		}
		break;
	}
	case 2: puts("А жаль..."); break;
	default: puts("Некорректный вариант"); break;
	}
	return 0;
}
