#ifndef SOFTWARE_DESIGN_ELLIPSE_H
#define SOFTWARE_DESIGN_ELLIPSE_H

#include "Shape.h"


class Ellipse : virtual public Shape {
protected:
    float radius_1_;
    float radius_2_;
public:
    explicit Ellipse();
    explicit Ellipse(float r_1, float r_2);
    explicit Ellipse(Point center, float r_1, float r_2);
    void scale(float value) override;
    void scale_r1(float value);
    void scale_r2(float value);

    float &radius_1() { return radius_1_;}
    const float &radius_1() const { return radius_1_;}

    float &radius_2() { return radius_2_;}
    const float &radius_2() const { return radius_2_;}

    std::string get_info() override ;
};


#endif //SOFTWARE_DESIGN_ELLIPSE_H
