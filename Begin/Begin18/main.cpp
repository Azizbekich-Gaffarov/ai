#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, ac, bc, K;

    cout << "Sonlar o'qida kesmalarning uzunligi va uning kopaytmasini hisoblovchi dastur:" << endl;
    cout << "a nuqta = "; cin >> a;
    cout << "b nuqta = "; cin >> b;
    cout << "c nuqta = "; cin >> c;

    ac = abs(a - c);
    bc = abs(b - c);
    K = ac * bc;

    cout << "AC kesmaning uzunligi = " << ac << endl;
    cout << "BC kesmaning uzunligi = " << bc << endl;
    cout << "Umumiy kesmalarning Ko'paytmasi = " << K << endl;

    return 0;
}
