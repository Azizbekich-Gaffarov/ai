#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, V, S;

    cout << "Kubning Hajmi va To'la sirtini hisoblovchi dastur:" << endl;
    cout << "a tomoni = "; cin >> a;

    V = pow(a, 3);
    S = 6 * pow(a, 2);

    cout << "Hajmi = " << V << endl;
    cout << "To'la sirti = " << S << endl;

    return 0;
}
