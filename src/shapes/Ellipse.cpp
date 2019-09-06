//
// Created by dmo on 07.09.2019.
//

#include "Ellipse.h"
#include <cmath>

Ellipse::Ellipse() : center_(Point()), radius_1_(1), radius_2_(2), angle_(0){}

Ellipse::Ellipse(float r_1, float r_2) : center_(Point()), radius_1_(r_1), radius_2_(r_2), angle_(0){}

Ellipse::Ellipse(Point center, float r_1, float r_2): center_(center), radius_1_(r_1), radius_2_(r_2), angle_(0) {}

void Ellipse::scale(float value) {
    radius_1_ *= value;
    radius_2_ *= value;
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
    return std::string("Circle. Center:") + std::to_string(center_.x) +
           std::string(", ") + std::to_string(center_.y) +
           std::string("; radius_1: ") + std::to_string(radius_1_) +
            std::string("; radius_2: ") + std::to_string(radius_2_);
}
