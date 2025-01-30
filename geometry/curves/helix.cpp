#include "helix.h"


Point Helix::at(float t) {
    return {radius * cosf(t), radius * sinf(t), step * t * (float)M_2_PI};
}


Point Helix::derivative_at(float t) {
    return { - radius * sinf(t), radius * cosf(t), step * (float)M_2_PI};
}