#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int main()
{
    const int MaxSize = 30;
    int x[MaxSize], y[MaxSize], k, n, z[MaxSize], l = 0, j = 0;
    cout << "k: ";
    cin >> k;
    cout << "n: ";
    cin >> n;
    srand((unsigned)time(NULL));
    for (int i = 0; i < k; i++)
    {
        x[i] = rand() % 10;
        cout << *(x + i) << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        y[i] = rand() % 10;
        cout << *(y + i) << " ";
    }
    for (int i = 0; i < k; i++)
    {
        if (j < n)
        {
            if (x[i] == y[i])
            {
                z[l] = x[i];
                l++;
            }
            j++;
        }
    }
    cout << endl;
    for (int i = 0; i < l; i++)
        cout << z[i] << " ";
}
