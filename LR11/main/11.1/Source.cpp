#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int t, s1(0), s2(0);
	cout << "t = "; cin >> t;
	int* a = new int[5];
	int* b = new int[5];
	cout << "��������� ������ �" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "a[" << i << "]="; cin >> a[i];
	}
	cout << "��������� ������ �" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "b[" << i << "]="; cin >> b[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (a[i] < t) s1++;
		if (b[i] < t) s2++;
	}
	cout << "� ������� � " << s1 << " ��������(��) ������ " << t << endl;
	cout << "� ������� � " << s2 << " ��������(��) ������ " << t << endl;
	if (s1 < s2)
	{
		for (int i = 0; i < 5; i++)
			cout << b[i] << " ";
		cout << endl;
		for (int i = 0; i < 5; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	else {
		for (int i = 0; i < 5; i++)
			cout << a[i] << " ";
		cout << endl;
		for (int i = 0; i < 5; i++)
			cout << b[i] << " ";
		cout << endl;
	}
	return 0;
}