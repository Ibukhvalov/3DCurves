#include "point.h"


Point Point::operator*(float t) const {
    return {x*t, y*t, z*t};
}


Point Point::operator/(float t) const {
    return {x/t, y/t, z/t};
}


Point Point::operator+(const Point &other) const {
    return {x+other.x, y+other.y, z+other.z};
}

Point Point::operator-(const Point &other) const {
    return {x-other.x, y-other.y, z-other.z};
}

float Point::deviation_value(const Point &other) const {
    Point deviation_point = this->operator-(other);
    return std::abs(deviation_point.x) + std::abs(deviation_point.y) + std::abs(deviation_point.z);
}


std::ostream& operator<<(std::ostream& out, const Point& p) {
    std::cout << "( " << p.x << ", " << p.y << ", " << p.z << " )";
    return out;
}
