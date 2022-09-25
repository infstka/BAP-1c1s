#include <iostream>
#include <iomanip>
#include <ctime>
#include <windows.h>
int main(int argc, TCHAR* argv[])
{
    setlocale(LC_ALL, "Russian");
    using namespace std;
    srand((unsigned)time(NULL));
    const int N = 5;
    double A[N][N];
    double sum = 0;
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
            A[y][x] = rand() % 10;
    }
    for (int y = 0; y < N; y++)
    {
        for (int x = 0; x < N; x++)
            cout << setw(2) << A[y][x];
        cout << endl;
    }
    cout << endl;
    for (int y = 0; y < N; y++) {
        for (int x = y; x < N; x++)
            sum += A[y][x];
    }
    for (int y = N / 2; y < N; y++) {
        for (int x = N - y - 1; x < y; x++)
            sum += A[y][x];
    }
    cout << sum << endl;
    system("pause");
    return 0;
}
