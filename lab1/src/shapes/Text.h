#ifndef SOFTWARE_DESIGN_TEXT_H
#define SOFTWARE_DESIGN_TEXT_H

#include <string>
#include "Shape.h"

class Text : virtual public Shape {
protected:
    std::string text_;
    size_t font_size_;
public:
    explicit Text(std::string text);
    explicit Text(std::string text, size_t font_size);

    size_t &font_size();
    const size_t &font_size() const;

    std::string & text();
    const std::string & text() const;

    void scale(float value) override;

    std::string get_info() const override;
};


#endif //SOFTWARE_DESIGN_TEXT_H
