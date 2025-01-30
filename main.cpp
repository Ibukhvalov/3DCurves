#include <iostream>
#include "containers/circlesContainer.h"
#include "containers/curvesContainer.h"
#include <cmath>

int main() {
    CurvesContainer curvCont(2, 2,2);
    curvCont.print_at((float) 1.2);

    CirclesContainer circCont(curvCont);
    circCont.sort_by_radius();

    Circle c1(20.f);


    std::cout << "Total sum of circle radii is " <<  circCont.total_radius_sum() << std::endl;

    return EXIT_SUCCESS;
}