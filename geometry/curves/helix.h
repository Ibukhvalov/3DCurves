#ifndef СPP_HELIX_H
#define СPP_HELIX_H

#include "circle.h"
#include <cmath>

// Helix is not inheriting from Circle intentionally
class Helix : public Curve {
public:
    Helix(float radius, float step): radius(radius), step(step) {
        if(radius < 0.f) this->radius = 0.f;
        if(step < 0.f) this->step = 0.f;
    };

    Point at(float t) override;

    Point derivative_at(float t) override;

private:
    float radius, step;
};


#endif //СPP_HELIX_H
