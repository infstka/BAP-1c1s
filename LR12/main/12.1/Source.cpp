#include <iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int n, k, counter = 0;
	char buffer[265], string[265];
	cout << "ввод строки: ";
	cin >> string;
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == '*')
		{
			i++;
			while (string[i] != '*')
			{
				buffer[counter] = string[i];
				counter++;
				i++;
			}
			cout << buffer;
			exit(0);
		}
	}
}