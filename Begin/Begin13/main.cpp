#include <iostream>

using namespace std;

int main()
{
    float r1, r2, s1, s2, s3, pi = 3.14;

    cout << "Yuzlarni hisoblovchi dastur:" << endl;
    cout << "Birinchi Radiusi = "; cin >> r1;
    cout << "Ikkinchi Radiusi = "; cin >> r2;

    s1 = pi * r1;
    s2 = pi * r2;
    s3 = pi * (r1 - r2);

    cout << "Birinchi Yuzasi = " << s1 << endl;
    cout << "Ikkinchi Yuzasi = " << s2 << endl;
    cout << "Uchinchi Yuzasi = " << s3 << endl;

    return 0;
}
