//
// Created by dmo on 07.09.2019.
//

#ifndef SOFTWARE_DESIGN_ELLIPSE_H
#define SOFTWARE_DESIGN_ELLIPSE_H

#include "Shape.h"

class Ellipse : public Shape {
    Point center_;
    float radius_1_;
    float radius_2_;
    float angle_;
public:
    explicit Ellipse();
    explicit Ellipse(float r_1, float r_2);
    explicit Ellipse(Point center, float r_1, float r_2);
    void scale(float value) override;
    void scale_r1(float value);
    void scale_r2(float value);
    void rotate(float angle);
    void rotate(Point axis, float angle) override;
    void move(Point new_base) override;

    Point &center() { return center_;}
    const Point &center() const { return center_;}

    float &radius_1() { return radius_1_;}
    const float &radius_1() const { return radius_1_;}

    float &radius_2() { return radius_2_;}
    const float &radius_2() const { return radius_2_;}

    float &angle() { return angle_;}
    const float &angle() const { return angle_;}

    std::string get_info() override ;
    virtual ~Ellipse() = default;
};


#endif //SOFTWARE_DESIGN_ELLIPSE_H
