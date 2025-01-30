#ifndef СPP_CONTAINER_H
#define СPP_CONTAINER_H

#include "../geometry/curves/curve.h"
#include "../geometry/curves/circle.h"
#include "../geometry/curves/ellipse.h"
#include "../geometry/curves/helix.h"

#include "../util.h"

#include <vector>
#include <memory>


class CurvesContainer {
public:
    CurvesContainer(unsigned int num_of_circles,
              unsigned int num_of_ellipses,
              unsigned int num_of_helixes);


    const std::vector<std::shared_ptr<Curve>>& get_curves() const { return curves; }

    void print_at(float t);

private:
    std::vector<std::shared_ptr<Curve>> curves;
};


#endif //СPP_CONTAINER_H
