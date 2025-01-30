#ifndef СPP_CURVE_H
#define СPP_CURVE_H

#include "../point.h"
#include <iostream>


class Curve {
public:
    virtual Point at(float t) = 0;
    virtual Point derivative_at(float t) = 0;

    virtual ~Curve() = default;

    void print_at(float t) {
        Point point_at = at(t);
        Point der_at = derivative_at(t);
        std::cout << "There is a point " << point_at << " with a derivative equals " << der_at << " at " << t;
    }
};



#endif //СPP_CURVE_H
