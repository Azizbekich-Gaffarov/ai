#include <iostream>
//Matematik kutubxonani chaqirish orqali ildiz, daraja hokazolarni osson yo'l bilan ishlash mumkin.

using namespace std;

int main()
{
    int a, S;

    cout << "Kvadratning Yuzasini hisoblovchi dastur:" << endl;
    cout << "a tomoni = "; cin >> a;

    S = a * a; //Kvadrat va boshqa katta darajadagi misollarni hisoblash uchun Pow funksiyadan foydalanish ham mumkin.

    cout << "Yuzasi = " << S << endl;

    return 0;
}
