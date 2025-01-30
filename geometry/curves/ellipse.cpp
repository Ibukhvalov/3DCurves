#include "ellipse.h"


Point Ellipse::at(float t) {
    return {a * cosf(t), b* sinf(t), 0};
}


Point Ellipse::derivative_at(float t) {
    return {- a * sinf(t), b * cosf(t), 0};
}


