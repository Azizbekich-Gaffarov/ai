#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, Geometrigi;

    cout << "Sonlarning o'rta Geometrigini hisoblovchi dastur:" << endl;
    cout << "a tomoni = "; cin >> a;
    cout << "b tomoni = "; cin >> b;

    Geometrigi = sqrt(a * b);

    cout << "Geometrigi = " << Geometrigi << endl;

    return 0;
}
