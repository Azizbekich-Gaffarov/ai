#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x1, x2, M;

    cout << "Sonlar o'qidagi orasidagi Masofani hioblovchi dastur:" << endl;
    cout << "X1 o'qi = "; cin >> x1;
    cout << "X2 o'qi = "; cin >> x2;

    M = abs(x2 - x1);

    cout << "Masofa = " << M << endl;

    return 0;
}
