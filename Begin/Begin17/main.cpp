#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, ac, bc, Y;

    cout << "Sonlar o'qida kesmalarning uzunligi va uning yig'indisini hisoblovchi dastur:" << endl;
    cout << "a nuqta = "; cin >> a;
    cout << "b nuqta = "; cin >> b;
    cout << "c nuqta = "; cin >> c;

    ac = abs(a - c);
    bc = abs(b - c);
    Y = ac + bc;

    cout << "AC kesmaning uzunligi = " << ac << endl;
    cout << "BC kesmaning uzunligi = " << bc << endl;
    cout << "Umumiy kesmalarning Yig'indisi = " << Y << endl;

    return 0;
}
