#include "circlesContainer.h"


CirclesContainer::CirclesContainer(const CurvesContainer &curveCont) {
    for(std::shared_ptr<Curve> curve : curveCont.get_curves()) {
        Circle* circle = dynamic_cast<Circle*>(curve.get());

        if(circle != nullptr)
            circles.push_back(std::static_pointer_cast<Circle>(curve));
    }

    std::cout << "Circles Container created with " << circles.size() << " elements\n";
}

void CirclesContainer::sort_by_radius() {
    sort(circles.begin(), circles.end(), [](const std::shared_ptr<Circle>& left, const std::shared_ptr<Circle>& right) {
        return left->get_radius() < right->get_radius();
    });
}

float CirclesContainer::total_radius_sum() {
    float shared_result{};

    #pragma omp parallel for reduction(+:shared_result)
    for(const auto& circle : circles)
        shared_result += circle->get_radius();

    return shared_result;
}
