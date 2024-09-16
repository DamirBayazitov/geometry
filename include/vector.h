#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include "point.h"
using namespace std;
class Vector {
public:
    Vector();
    Vector(double x, double y);
    Vector(Point &a);
    Vector(const Vector &a);
    ~Vector();
    double getX() const;
    double getY() const;
    friend Vector operator+(const Vector &o1, const Vector &o2);

    friend Vector operator-(const Vector &o1, const Vector &o2);
    double getLength(Vector a);
    friend ostream& operator<<(ostream& os, const Vector& a);
private:
    Point point;
};
ostream& operator<<(ostream& os, const Point& a);
void defineCollinearVectors(const Vector &a, const Vector &b);
double getscalarProduct(const Vector &a, const Vector &b);
Vector operator-(const Vector &o1, const Vector &o2);
Vector operator+(const Vector &o1, const Vector &o2);
#endif