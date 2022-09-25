#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char tmp[33];
    int A, B, n = 5, m = 1;
    cout << "¬вод A: ";
    cin >> A;
    cout << "¬вод B: ";
    cin >> B;
    _itoa_s(A, tmp, 2); cout << "A =" << tmp << endl;
    _itoa_s(B, tmp, 2); cout << "B =" << tmp << endl;
    B = B ^ 8 << m;
    B |= ((A & (8 << n)) >> n) << m;
    _itoa_s(B, tmp, 2); cout << "B после преобразовани€ = " << tmp << endl;
}
