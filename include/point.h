#ifndef DOT_H
#define DOT_H
#include <iostream>
using namespace std;
class Point {
public:
    Point();
    Point(double x, double y);
    Point(Point &a);
    ~Point();
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);
    friend std::ostream& operator<<(ostream& os, const Point& a);
private:
    double x, y;
};


std::ostream& operator<<(ostream& os, const Point& a);
#endif; 