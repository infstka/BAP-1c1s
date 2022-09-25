#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    int a[100][100], m, min, max, i_max = 0, i_min = 0, j_max = 0, j_min = 0, b;
    cout << "ввод размера массива = ";
    cin >> m;
    cout << "ввод массива = ";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    min = a[0][0];
    max = a[0][0];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++) {
            if (a[i][j] > max) { max = a[i][j]; i_max = i; j_max = j; }
            if (a[i][j] < min) { min = a[i][j]; i_min = i; j_min = j; }
        }
    b = a[i_max][j_max];
    a[i_max][j_max] = a[i_min][j_min];
    a[i_min][j_min] = b;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
    }
}
