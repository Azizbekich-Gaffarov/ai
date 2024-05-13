#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, C, P;

    cout << "To'g'ri uchburchakning Gipotenuzasi va Peremerini hisoblovchi dastur:" << endl;
    cout << "1-katetni kiriting = "; cin >> a;
    cout << "2-katetni kiriting = "; cin >> b;

    C = sqrt(pow(a, 2) + pow(b, 2));
    P = a + b + C;

    cout << "Gipotenuzasi = " << C << endl;
    cout << "Peremeri = " << P << endl;

    return 0;
}
