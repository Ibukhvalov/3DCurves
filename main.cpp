#include <iostream>
#include "containers/circlesContainer.h"
#include "containers/curvesContainer.h"
#include <cmath>

int main() {
    CurvesContainer curvCont(100,20,30);
    curvCont.print_at((float) M_PI_4);

    CirclesContainer circCont(curvCont);
    circCont.sort_by_radius();

    std::cout << "Total sum of circle radii is " <<  circCont.total_radius_sum() << std::endl;

    return EXIT_SUCCESS;
}