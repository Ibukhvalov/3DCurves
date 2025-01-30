#include "curve.h"



Point Curve::raw_der_at(float t, float delta) {
    return (at(t+delta) - at(t)) / delta;
}
