#include <iostream>
#include <ctime>
int main()
{
    setlocale(LC_CTYPE, "Russian");
    using namespace std;
    srand(static_cast<int>(time(NULL)));
    int size, cnt_kr_7 = 0, j = 0, a, b;
    cout << "размер массива =  ";
    cin >> size;
    a = new int[size];
    cout << "массив = ";
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 9 - 7;
        cout << arr[i] << "  ";
        if (!(i % 3))
        {
            cnt_kr_7++;
        }
    }
    cout << endl;
    b = new int[cnt_kr_7];
    cout << "массив после удаления = ";
    for (int i = 0; i < size; i++)
    {
        if (!(i % 7))
        {
            continue;
        }
        else
        {
            b[j] = a[i];
            cout << b[j] << "  ";
            j++;
        }
    }
    cout << endl;
    system("pause");
    return 0;
}