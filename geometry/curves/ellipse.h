#ifndef СPP_ELLIPSE_H
#define СPP_ELLIPSE_H

#include "curve.h"
#include <cmath>
#include "../util.h"


class Ellipse : public Curve {
public:
    Ellipse(): Ellipse(config::get_rand_radius(), config::get_rand_radius()) {};

    Ellipse(float xAxisRadius, float yAxisRadius): a(xAxisRadius), b(yAxisRadius) {
        if(a < 0.) this->a = 0;
        if(b < 0.) this->b = 0;
    };

    Point at(float t) override;

    Point derivative_at(float t) override;

private:
    float a, b;
};


#endif //СPP_ELLIPSE_H
