//
// Created by dmo on 05.09.2019.
//

#ifndef SOFTWARE_DESIGN_SHAPE_H
#define SOFTWARE_DESIGN_SHAPE_H

#include <string>

struct Point{
    float x, y;
    explicit Point(float x = 0, float y = 0) : x(x), y(y){}
    Point &operator=(const Point &other) // copy assignment
    {
        if (this != &other)
        {
            x = other.x;
            y = other.y;
        }
        return *this;
    }

};

class Shape{
public:
    virtual void scale(float value) = 0;
    virtual void rotate(Point axis, float angle) = 0;
    virtual void move(Point new_base) = 0;
    virtual std::string get_info() = 0;
    virtual ~Shape() = default;
};

#endif //SOFTWARE_DESIGN_SHAPE_H
