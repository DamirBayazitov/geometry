#include "point.h"
#include <cmath>

Point::Point() = default;

Point::Point(double x, double y) : x(x), y(y) { }

Point::Point(Point &a) : x(a.x), y(a.y) { }

Point::~Point() = default;

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

void Point::setX(double x) {this->x = x;}

void Point::setY(double y) {this->y = y;}

ostream& operator<<(ostream& os, const Point& a) {
    os << "{" << a.getX() << ", " << a.getY() << "}";
    return os;
}



