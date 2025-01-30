#include "point.h"


Point Point::operator*(float t) const {
    return {x*t, y*t, z*t};
}

Point Point::operator+(const Point &other) const {
    return {x+other.x, y+other.y, z+other.z};
}

Point& Point::with_z(float new_z) {
    z = new_z;
    return *this;
}


std::ostream& operator<<(std::ostream& out, const Point& p) {
    std::cout << "( " << p.x << ", " << p.y << ", " << p.z << " )";
    return out;
}
