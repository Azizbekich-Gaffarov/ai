#include <iostream>

using namespace std;

int main()
{
    float l, R, S, pi = 3.14;

    cout << "Aylananing Radiusi va Yuzasini hisoblovchi dastur:" << endl;
    cout << "Uzunligi = "; cin >> l;

    R = l / 2 * pi;
    S = pi * (R * R);

    cout << "Radiusi = " << R << endl;
    cout << "Yuzasi = " << S << endl;

    return 0;
}
