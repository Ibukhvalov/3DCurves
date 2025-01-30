#include "helix.h"


Point Helix::at(float t) {
    return {radius * cosf(t), radius * sinf(t), step * t * (float)M_1_PI / 2.f};
}

Point Helix::derivative_at(float t) {
    return { - radius * sinf(t), radius * cosf(t), step * (float)M_1_PI / 2.f};
}
