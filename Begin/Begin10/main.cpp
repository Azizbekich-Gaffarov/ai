#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b;

    cout << "Ikkita sonning Yig'indisi, Ko'paytmasi va ularning Kvadratini hisoblovchi dastur:" << endl;
    cout << "1-sonini kiriting = "; cin >> a;
    cout << "2-sonini kiriting = "; cin >> b;

    cout << "Yig'indisi = " << a + b << "\n" << "Ko'paytmasi = " << a * b << "\n" << "Birinchi son Kvadrati = " << pow(a, 2) << "\n" << "Ikkinchi son Kvadrati = " << pow(b, 2) << endl;

    return 0;
}
