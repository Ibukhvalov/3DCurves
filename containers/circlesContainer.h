#ifndef СPP_CIRCLESCONTAINER_H
#define СPP_CIRCLESCONTAINER_H

#include "../geometry/curves/circle.h"
#include "curvesContainer.h"
#include <vector>
#include <algorithm>
#include <memory>
#include <omp.h>


class CirclesContainer {
public:
    explicit CirclesContainer(const CurvesContainer& curveCont);

    void sort_by_radius();

    float total_radius_sum();

private:
    std::vector<std::shared_ptr<Circle>> circles;
};


#endif //СPP_CIRCLESCONTAINER_H
