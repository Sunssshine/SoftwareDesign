//
// Created by dmo on 05.09.2019.
//

#ifndef SOFTWARE_DESIGN_SHAPE_H
#define SOFTWARE_DESIGN_SHAPE_H

#include <iostream>
#include <string>
#include <cmath>

struct Point{
    float x, y;

    Point();
    explicit Point(float x, float y);

    Point &operator=(const Point &other);
    friend std::ostream & operator<<(std::ostream &out, const Point &c);
    friend std::string operator+(const std::basic_string<char>& string, Point point);
};

class Shape{
protected:
    Point center_;
    float angle_;

    Shape();
    explicit Shape(Point center);
public:

    virtual Point &center();
    virtual const Point &center() const;

    virtual float &angle();
    virtual const float &angle() const;

    virtual void scale(float value) = 0;
    virtual void rotate(float angle) = 0;
    virtual void rotate(Point axis, float angle) = 0;
    virtual void move(Point new_base) = 0;
    virtual std::string get_info() = 0;
    virtual ~Shape() = default;
};

#endif //SOFTWARE_DESIGN_SHAPE_H
