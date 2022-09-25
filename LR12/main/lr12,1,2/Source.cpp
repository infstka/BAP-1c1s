#include <iostream>
#include <string>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	const int max = 80;
	char string1[max], string2[max];
	unsigned int i, k = 0;
	cout << "¬вод строки = ";
	cin.getline(string1, max);
	for (i = 0; string1[i]; i++)
	{
		if (string1[i] == 'a' || string1[i] == 'A')
		{
			string2[k] = string1[i];
			k++;
			string2[k] = '!';
			k++;
		}
		else string2[k++] = string1[i];
	}
	string2[k] = '\0';
	cout << "»тог = " << string2 << endl;
	return 0;
}