#ifndef SOFTWARE_DESIGN_TEXT_H
#define SOFTWARE_DESIGN_TEXT_H

#include <string>
#include "Shape.h"

class Text : public Shape {
    std::string text_;
    size_t font_size_;
public:
    Text(std::string text);
    Text(std::string text, size_t font_size );

    std::string & text();
    const std::string & text() const;

    void scale(float value) override;
    void rotate(float angle) override;
    void rotate(Point axis, float angle) override;

    void move(Point new_base) override;

    std::string get_info() override;
};


#endif //SOFTWARE_DESIGN_TEXT_H
