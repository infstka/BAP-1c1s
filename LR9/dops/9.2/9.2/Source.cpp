#include <iostream>
void main() 
{
using namespace std; 
setlocale(LC_CTYPE, "Russian"); 
const int SizeMax = 50; int k[SizeMax], i = 0, j = 0, l, counter = 0;
cout << "����� ������� = " << endl; cin >> l;
for (i = 0; i < l; i++) 
{
	cin >> k[i]; 
}
for (i = 0; i < l; i++) 
{
	if (k[i] == k[i + 1]) 
	{
		counter++; 
	} 
}
cout <<"���������� ��� ���������� ��������� = " << counter<< endl; 
}