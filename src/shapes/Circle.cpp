#include "Circle.h"

Circle::Circle() : Shape(), radius_(1){}

Circle::Circle(float radius) : Shape(), radius_(radius){}
Circle::Circle(Point center, float radius = 1) : Shape(center), radius_(radius) {}

void Circle::scale(float value) {
    if (value > 0)
        radius_ *= value;
}

void Circle::rotate(float angle){} // do nothing

void Circle::rotate(Point axis, float angle) {
    center_ = Point{(center_.x - axis.x) * std::cos(angle) - (center_.y - axis.y) * std::sin(angle) + axis.x,
                    (center_.x - axis.x) * std::sin(angle) + (center_.y - axis.y) * std::cos(angle) + axis.y};
}

std::string Circle::get_info() const {
    return std::string("Circle. Center:") + center_ +
           std::string("; radius: ") + std::to_string(radius_) +
           std::string("; angle: ") + std::to_string(angle_);
}