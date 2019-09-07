#ifndef SOFTWARE_DESIGN_CIRCLE_H
#define SOFTWARE_DESIGN_CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
    float radius_;
public:
    explicit Circle();
    explicit Circle(float radius);
    explicit Circle(Point center, float radius);
    void scale(float value) override;
    void rotate(float angle) override;
    void rotate(Point axis, float angle) override;
    void move(Point new_base) override;

    float &radius() { return radius_;}
    const float &radius() const { return radius_;}

    std::string get_info() override ;
    virtual ~Circle() = default;
};




#endif //SOFTWARE_DESIGN_CIRCLE_H
