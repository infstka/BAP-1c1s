#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "Russian");
	const unsigned int m = 3, n = 3;
	int A[m][n];
	unsigned int count_pol = 0, sum = 0;
	cout << "���������� ���� ��������� ������� = " << endl;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			cin >> A[i][j];
			if(A[i][j] > 0)
			{
			count_pol++;
			sum += A[i][j];
		}
	}
}
float sr = sum / count_pol;
cout << "���-�� ������������� ��-�� = " << count_pol << endl;
cout << "����� ������������� ��-�� = " << sum << endl;
cout << "������� �������������� ��-�� = " << sr << endl;
}