#ifndef СPP_CURVE_H
#define СPP_CURVE_H

#include "../point.h"
#include <iostream>

const float epsilon = 0.1f;
const float delta = 0.0001f;

class Curve {
public:
    virtual Point at(float t) = 0;
    virtual Point derivative_at(float t) = 0;
    virtual Point raw_der_at(float t, float delta);

    virtual ~Curve() = default;

    void print_at(float t) {
        Point derivative = derivative_at(t);
        Point raw_der = raw_der_at(t, delta);

        float dev_val = derivative.deviation_value(raw_der);
        if(dev_val > epsilon) {
            std::cout << "High deviation value (" << dev_val << ")\n";
        }

        std::cout << "There is a point " << at(t) <<
        " with a derivative equals " << derivative <<
        " at " << t;
    }
};



#endif //СPP_CURVE_H
