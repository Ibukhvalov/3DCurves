#include "curvesContainer.h"

CurvesContainer::CurvesContainer(unsigned int num_of_circles,
                      unsigned int num_of_ellipses,
                      unsigned int num_of_helixes) {
    curves.reserve(num_of_circles + num_of_ellipses + num_of_helixes);

    for(int i = 0; i < num_of_circles; ++i)
        curves.emplace_back(new Circle);

    for(int i = 0; i < num_of_ellipses; ++i)
        curves.emplace_back(new Ellipse);

    for(int i = 0; i < num_of_helixes; ++i)
        curves.emplace_back(new Helix);

    std::cout << "Curves Container created with " << curves.size() << " elements\n";
}




void CurvesContainer::print_at(float t) {
    for(const auto& curve : curves) {
        curve->print_at(t);
        std::cout << std::endl;
    }
}