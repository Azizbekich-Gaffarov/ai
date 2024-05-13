#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b;

    cout << "Ikkita sonning Yig'indisi, Ko'paytmasi va har birining Modulini hisoblovchi dastur:" << endl;
    cout << "1-sonini kiriting = "; cin >> a;
    cout << "2-sonini kiriting = "; cin >> b;

    cout << "Yig'indisi = " << a + b << "\n" << "Ko'paytmasi = " << a * b << "\n" << "Birinchi son Moduli = " << abs(a) << "\n" << "Ikkinchi son Moduli = " << abs(b) << endl;

    return 0;
}
