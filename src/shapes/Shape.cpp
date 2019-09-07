#include "Shape.h"

Point::Point() : x(0), y(0) {}

Point::Point(float x, float y = 0): x(x), y(y){}

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

Shape::Shape() : center_(Point()), angle_(0){}

Shape::Shape(Point center) : center_(center), angle_(0){}

Point &Shape::center() { return center_; }

const Point &Shape::center() const { return center_; }

float &Shape::angle() { return angle_; }

const float &Shape::angle() const { return angle_; }