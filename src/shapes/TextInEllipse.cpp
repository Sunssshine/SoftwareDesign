//
// Created by dmo on 08.09.2019.
//

#include "TextInEllipse.h"

#include <utility>

TextInEllipse::TextInEllipse(std::string info): Text(std::move(info)){}
TextInEllipse::TextInEllipse(std::string info, size_t font_size) : Text(std::move(info), font_size){}
TextInEllipse::TextInEllipse(std::string info, float radius_1, float radius_2) : Text(std::move(info)), Ellipse(radius_1, radius_2) {}
TextInEllipse::TextInEllipse(std::string info, Point center, float radius_1, float radius_2) : Text(std::move(info)), Ellipse(center, radius_1, radius_2){}
TextInEllipse::TextInEllipse(std::string info, size_t font_size, float radius_1, float radius_2) :
    Text(std::move(info), font_size), Ellipse(radius_1, radius_2) {}
TextInEllipse::TextInEllipse(std::string info, size_t font_size, Point center, float radius_1, float radius_2):
Text(std::move(info), font_size), Ellipse(center, radius_1, radius_2) {}

void TextInEllipse::scale(float value) {
    font_size_ *= value;
    radius_1_*= value;
    radius_2_*= value;
}

std::string TextInEllipse::get_info() const {
    return std::string("Text in ellipse. Center:") + center_ +
           "; info: \"" + text_ +
           "\"; font size: " + std::to_string(font_size_) +
           "; angle: " + std::to_string(angle_) +
           "; radius_1: " + std::to_string(radius_1_) +
           "; radius_2: " + std::to_string(radius_2_) +
            std::string("; id: ") + std::to_string(id_);

}
