#ifndef СPP_POINT_H
#define СPP_POINT_H

#include <iostream>

struct Point {
    float x,y,z;

    Point operator*(float t) const;

    Point operator/(float t) const;

    Point operator+(const Point &other) const;

    Point operator-(const Point &other) const;

    float deviation_value(const Point &other) const;

};

std::ostream& operator<<(std::ostream& out, const Point& p);




#endif //СPP_POINT_H
