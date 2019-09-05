//
// Created by dmo on 05.09.2019.
//

#include "Circle.h"

#include <cmath>

Circle::Circle() : center_(Point(0, 0)), radius_(1){}

Circle::Circle(float radius) : center_(Point(0, 0)), radius_(radius){}
Circle::Circle(Point center, float radius = 1) : center_(center), radius_(radius) {}

void Circle::scale(float value) {
    radius_ *= value;
}

void Circle::rotate(Point axis, float angle) {
    center_ = Point{(center_.x - axis.x) * std::cos(angle) - (center_.y - axis.y) * std::sin(angle) + axis.x,
                    (center_.x - axis.x) * std::sin(angle) + (center_.y - axis.y) * std::cos(angle) + axis.y};
}

void Circle::move(Point new_base) {
    center_ = new_base;
}

std::string Circle::get_info() {
    return std::string("Circle. Center:") + std::to_string(center_.x) +
           std::string(", ") + std::to_string(center_.y) +
           std::string("; radius: ") + std::to_string(radius_);
}