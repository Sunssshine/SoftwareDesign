//
// Created by dmo on 08.09.2019.
//

#ifndef SOFTWARE_DESIGN_TEXTINELLIPSE_H
#define SOFTWARE_DESIGN_TEXTINELLIPSE_H

#include "Ellipse.h"
#include "Text.h"

class TextInEllipse : public Ellipse, public Text { // center, angle, radius_1.radius_2, text, font_size
public:
    explicit TextInEllipse(std::string info);
    TextInEllipse(std::string info, size_t font_size);
    TextInEllipse(std::string info, float radius_1, float radius_2);
    TextInEllipse(std::string info, Point center, float radius_1, float radius_2);
    TextInEllipse(std::string info, size_t font_size, float radius_1, float radius_2);
    TextInEllipse(std::string info, size_t font_size, Point center, float radius_1, float radius_2);

    void scale(float value) override;
    virtual std::string get_info();

};


#endif //SOFTWARE_DESIGN_TEXTINELLIPSE_H
