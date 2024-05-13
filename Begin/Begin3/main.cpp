#include <iostream>

using namespace std;

int main()
{
    int a, b, S, P;

    cout << "To'g'ri to'rtburchakning Yuzasi va Peremetrini hisoblovchi dastur:" << endl;
    cout << "a tomoni = "; cin >> a;
    cout << "b tomoni = "; cin >> b;

    S = a * b;
    P = 2 * (a + b);

    cout << "Yuzasi = " << S << endl;
    cout << "Peremetri = " << P << endl;

    return 0;
}
