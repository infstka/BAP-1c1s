#include <iostream> 
#include <ctime> 
#include <cstdlib> 
#include <iomanip> 
int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    srand((unsigned)time(0));
    const int N = 5;
    const int M = 5;
    int m[N][M];
    int i, j;
    int p, q;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            m[i][j] = rand() % 10;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            if (j % M == 0)
                cout << endl;
            cout << setw(3) << m[i][j];
        }
    cout << endl;
    cout << "גגמה םמלונא סעמכבצמג = " << endl;
    cin >> p >> q;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            int temp = m[i][p];
            m[i][p] = m[i][q];
            m[i][q] = temp;
        }
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
        {
            if (j % M == 0)
                cout << endl;
            cout << setw(3) << m[i][j];
        }
    cout << endl;
    system("Pause");
}
