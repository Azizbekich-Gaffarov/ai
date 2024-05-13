#include <iostream>

using namespace std;

int main()
{
    int a, b, c, V, S;

    cout << "Paralelepepidning Hajmi va To'la sirtini hisoblovchi dastur:" << endl;
    cout << "a tomoni = "; cin >> a;
    cout << "b tomoni = "; cin >> b;
    cout << "c tomoni = "; cin >> c;

    V = a * b * c;
    S = 2 * (a * b + b * c + c * a);

    cout << "Hajmi = " << V << endl;
    cout << "To'la sirti = " << S << endl;

    return 0;
}
