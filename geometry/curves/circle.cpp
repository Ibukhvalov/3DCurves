#include "circle.h"


Point Circle::at(float t) {
    return Point{cosf(t), sinf(t), 0} * radius;
}

Point Circle::derivative_at(float t) {
    return Point{- sinf(t), cosf(t), 0} * radius;
}

