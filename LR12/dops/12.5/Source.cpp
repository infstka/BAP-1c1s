#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    char s[256];
    cout << "¬ведите строку: " << endl;
    cin.getline(s, sizeof(s));
    char c = cin.get();
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
    cout << "–езультат: " << s << endl;
}
