#include "Ellipse.h"

Ellipse::Ellipse() : Shape(), radius_1_(1), radius_2_(2){}

Ellipse::Ellipse(float r_1, float r_2) : Shape(), radius_1_(r_1), radius_2_(r_2) {}

Ellipse::Ellipse(Point center, float r_1, float r_2): Shape(center), radius_1_(r_1), radius_2_(r_2) {}

void Ellipse::scale(float value) {
    if (value > 0)
    {
        radius_1_ *= value;
        radius_2_ *= value;
    }
}

void Ellipse::scale_r1(float value) {
    radius_1_ *= value;
}

void Ellipse::scale_r2(float value) {
    radius_2_ *= value;
}

std::string Ellipse::get_info() const {
    return std::string("Ellipse. Center:") + center_ +
           "; radius_1: " + std::to_string(radius_1_) +
           "; radius_2: " + std::to_string(radius_2_) +
           "; angle: " + std::to_string(angle_) +
           "; id: " + std::to_string(id_);

}
