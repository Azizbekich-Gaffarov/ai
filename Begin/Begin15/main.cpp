#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float s, D, R, pi = 3.14;

    cout << "Aylananing Diametri va Radiusini hisoblovchi dastur:" << endl;
    cout << "Yuzasi = "; cin >> s;

    R = sqrt(s / pi);
    D = 2 * R;

    cout << "Radiusi = " << R << endl;
    cout << "Diametri = " << D << endl;

    return 0;
}
