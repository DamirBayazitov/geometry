#include "vector.h"
#include <stdio.h>
using namespace std;


Vector::Vector() = default;
Vector::Vector(double x, double y) {
        point.setX(x);
        point.setY(y);  
}
Vector::Vector(Point &a) {
        point.setX(a.getX());
        point.setY(a.getY());
}
Vector::Vector(const Vector &a) {
        point.setX(a.getX());
        point.setY(a.getY());    
}
Vector::~Vector() = default;
double Vector::getX() const {
    return point.getX();
}
double Vector::getY() const {
    return point.getY();
}
double Vector::getLength(Vector a) {
    return sqrt(a.getX()*a.getX() + a.getY()*a.getY());
}
ostream& operator<<(ostream& os, const Vector& a) {
    os << a.point;
    return os;   
}
Vector operator+(const Vector &o1, const Vector &o2) {
    return Vector(o1.getX() + o2.getX(), o1.getY() + o2.getY());  
}
Vector operator-(const Vector &o1, const Vector &o2) {
    return Vector(o1.getX() - o2.getX(), o1.getY() - o2.getY());
}
void defineCollinearVectors(const Vector &a, const Vector &b) {
    if (a.getX() / b.getX()  == a.getY() / b.getY()) {
        cout << "Collinear" << "\n";
    }
    else {
        cout << "Non-collinear" << "\n";
    }
}
double getscalarProduct(const Vector &a, const Vector &b) {
    return (a.getX() * b.getX() + a.getY() * b.getY());
}