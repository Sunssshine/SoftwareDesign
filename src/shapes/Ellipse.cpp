#include <cmath>
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

void Ellipse::rotate(float angle) {
    angle_ += angle;
}

void Ellipse::rotate(Point axis, float angle) {
    center_ = Point{(center_.x - axis.x) * std::cos(angle) - (center_.y - axis.y) * std::sin(angle) + axis.x,
                    (center_.x - axis.x) * std::sin(angle) + (center_.y - axis.y) * std::cos(angle) + axis.y};
    angle_ += angle;
}

void Ellipse::move(Point new_base) {
    center_ = new_base;
}

std::string Ellipse::get_info() {
    return std::string("Ellipse. Center:") + center_ +
           "; radius_1: " + std::to_string(radius_1_) +
           "; radius_2: " + std::to_string(radius_2_) +
           "; angle: " + std::to_string(angle_);

}
