#include "circlesContainer.h"



#include <thread> // for std::this_thread::sleep_for
#include <chrono> // for std::chrono::milliseconds



CirclesContainer::CirclesContainer(const CurvesContainer &curveCont) {
    for(std::shared_ptr<Curve> curve : curveCont.get_curves()) {
        Circle* circle = dynamic_cast<Circle*>(curve.get());

        if(circle != nullptr)
            circles.push_back(std::static_pointer_cast<Circle>(curve));
    }

    std::cout << "Circles Container created with " << circles.size() << " elements\n";
}

void CirclesContainer::sort_by_radius() {
    sort(circles.begin(), circles.end(), [](std::shared_ptr<Circle> left, std::shared_ptr<Circle> right) {
        return left->get_radius() < right->get_radius();
    });
}

float CirclesContainer::total_radius_sum() {
    float result{};

    for(auto circle : circles)
        result += circle->get_radius();

    return result;
}