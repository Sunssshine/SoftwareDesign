#include "Shape.h"

Point::Point(float x, float y = 0): x(x), y(y){}

Point::Point() : x(0), y(0) {}

Point &Point::operator=(const Point &other) // copy assignment
{
    if (this != &other)
    {
        x = other.x;
        y = other.y;
    }
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Point &c) {
    out << '{' << c.x << "; " << c.y << '}';
    return out;
}

std::string operator+(const std::basic_string<char>& string, Point point) {
    return string + '{' + std::to_string(point.x) + "; " + std::to_string(point.y) + '}';
}

Shape::Shape(Point center) : center_(center), angle_(0){
    static size_t _id = 0;
    id_ = _id;
    ++_id;
}

Shape::Shape() : Shape(Point()){}

Point &Shape::center() { return center_; }

const Point &Shape::center() const { return center_; }

float &Shape::angle() { return angle_; }

const float &Shape::angle() const { return angle_; }

void Shape::rotate(float angle) {
    angle_ += angle;
}

void Shape::rotate(Point axis, float angle) {
    center_ = Point{(center_.x - axis.x) * std::cos(angle) - (center_.y - axis.y) * std::sin(angle) + axis.x,
                    (center_.x - axis.x) * std::sin(angle) + (center_.y - axis.y) * std::cos(angle) + axis.y};
    angle_ += angle;
}

void Shape::move(Point new_base) {
    center_ = new_base;
}

std::ostream & operator<<(std::ostream &out, const Shape &c) {
    out << c.get_info();
    return out;
}