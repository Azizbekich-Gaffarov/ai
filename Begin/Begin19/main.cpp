#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

// Funksiya ikki nuqta orasidagi masofani hisoblash
double distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

// Funksiya to'g'ri to'rtburchakning perimetrini hisoblash
double perimeter(double a, double b) {
    return 2 * (a + b);
}

// Funksiya to'g'ri to'rtburchakning yuzasini hisoblash
double area(double a, double b) {
    return a * b;
}

int main() {
    Point p1, p2, p3, p4;

    // To'g'ri to'rtburchakning tomonlarining koordinatalarini qabul qilish
    cout << "Birinchi nuqtani x va y koordinatalarini kiriting: ";
    cin >> p1.x >> p1.y;
    cout << "Ikkinchi nuqtani x va y koordinatalarini kiriting: ";
    cin >> p3.x >> p3.y;

    // To'g'ri to'rtburchakning ikkinchi nuqtalari topish
    p2.x = p3.x;
    p2.y = p1.y;
    p4.x = p1.x;
    p4.y = p3.y;

    // Tomonlar uzunligini hisoblash
    double side1 = distance(p1, p2);
    double side2 = distance(p2, p3);

    // Perimetr va yuzani hisoblash
    double peri = perimeter(side1, side2);
    double ar = area(side1, side2);

    cout << "Perimetr: " << peri << endl;
    cout << "Yuzasi: " << ar << endl;

    return 0;
}
