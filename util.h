#ifndef СPP_UTIL_H
#define СPP_UTIL_H

#include <random>

inline float rand_float() { return static_cast<float>(std::rand()) / static_cast<float>(RAND_MAX); }

namespace config {
    const float MAX_RADIUS = 100.f;
    const float MAX_HELIX_STEP = 10.f;

    inline float get_rand_radius() { return rand_float() * MAX_RADIUS; }
    inline float get_rand_helix_step() { return rand_float() * MAX_HELIX_STEP; }
}



#endif //СPP_UTIL_H
