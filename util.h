#ifndef СPP_UTIL_H
#define СPP_UTIL_H

#include <random>

inline float rand_float() { return static_cast<float>(std::rand()) / static_cast<float>(RAND_MAX); }


#endif //СPP_UTIL_H
