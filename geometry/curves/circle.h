#ifndef СPP_CIRCLE_H
#define СPP_CIRCLE_H

#include "curve.h"
#include <cmath>

class Circle : public Curve {
public:
    Circle(float radius): radius(radius) {
        if (radius < 0.f) this->radius = 0.f;
    };

    float get_radius() { return radius; }

    Point at(float t) override;

    Point derivative_at(float t) override;


private:
    float radius;
};


#endif //СPP_CIRCLE_H
