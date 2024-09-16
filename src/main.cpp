#include <stdio.h>
#include "vector.h"
#include "point.h"
#include "iostream"







int main() {
    Vector a(1, 2);
    Vector b(2, 4);
    double sclar;
    Vector c;
    Vector d;
    c = a + b;
    d = a - b;
    cout << a.getLength(a) << "\n";
    defineCollinearVectors(a, b);
    cout << c << "\n";
    cout << d << "\n";
    sclar = getscalarProduct(a, b);
    cout << sclar << "\n";
}