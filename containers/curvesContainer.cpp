#include "curvesContainer.h"

CurvesContainer::CurvesContainer(unsigned int num_of_circles,
                      unsigned int num_of_ellipses,
                      unsigned int num_of_helixes) {
    const float MAX_RADIUS = 100.f;
    const float MAX_STEP = 10.f;

    curves.reserve(num_of_circles + num_of_ellipses + num_of_helixes);

    for(int i = 0; i < num_of_circles; ++i)
        curves.emplace_back(new Circle(rand_float() * MAX_RADIUS));

    for(int i = 0; i < num_of_ellipses; ++i)
        curves.emplace_back(new Ellipse(rand_float() * MAX_RADIUS, rand_float() * MAX_RADIUS));

    for(int i = 0; i < num_of_helixes; ++i)
        curves.emplace_back(new Helix(rand_float() * MAX_RADIUS, rand_float() * MAX_STEP));

    std::cout << "Curves Container created with " << curves.size() << " elements\n";
}




void CurvesContainer::print_at(float t) {
    for(auto curve : curves) {
        curve->print_at(t);
        std::cout << std::endl;
    }
}