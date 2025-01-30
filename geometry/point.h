#ifndef СPP_POINT_H
#define СPP_POINT_H

#include <iostream>

struct Point {
    float x,y,z;

    Point operator*(float t) const;

    Point operator+(const Point &other) const;

    Point& with_z(float new_z);
};

std::ostream& operator<<(std::ostream& out, const Point& p);




#endif //СPP_POINT_H
