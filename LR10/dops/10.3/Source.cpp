#include <iostream> 
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char temp[33];
    unsigned int A;
    int n, b0, b1, razn;
    n = 0;
    b1 = 0;
    b0 = 0;
    cout << "Ввод числа A: ";
    cin >> A;
    _itoa_s(A, temp, 2);
    cout << temp << endl;
    while (temp[n] == '1' || temp[n] == '0')
    {
        if (temp[n] == '1') 
        {
            b1++;
        }
        else 
        {
            b0++;
        }
        n++;
    }
    cout << "Кол-во битов равных единице: " << b1 << endl;
    cout << "Кол-во битов равных нулю: " << b0 << endl;
    razn = b1 - b0;
    cout << "Разница между кол-вом битов равных 1 и равных 0: " << razn << endl;
    return 0;
}
