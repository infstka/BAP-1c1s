#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char tmp[33];
    int A, B, n, m;
    cout << "¬вод A: ";
    cin >> A;
    cout << "¬вод B: ";
    cin >> B;
    cout << "¬вод n: ";
    cin >> n;
    cout << "¬вод m: ";
    cin >> m;
    _itoa_s(A, tmp, 2); cout << "„исло A - " << tmp << endl;
    _itoa_s(B, tmp, 2); cout << "„исло B - " << tmp << endl;
    B = B ^ 7 << m;
    B |= ((A & (7 << n)) >> n) << m;
    _itoa_s(B, tmp, 2); cout << "B - " << tmp << endl;
}
