#include <utility>

#include "Text.h"

Text::Text(std::string text) : Shape(), text_(std::move(text)), font_size_(8) {}


Text::Text(std::string text, size_t font_size ): Shape(), text_(std::move(text)) {
    font_size_ = font_size ? font_size : 8;
}

void Text::scale(float value) {
    if (value > 0)
        font_size_ *= value;
}

void Text::rotate(Point axis, float angle) {
    center_ = Point{(center_.x - axis.x) * std::cos(angle) - (center_.y - axis.y) * std::sin(angle) + axis.x,
                    (center_.x - axis.x) * std::sin(angle) + (center_.y - axis.y) * std::cos(angle) + axis.y};
    angle_ += angle;
}

std::string &Text::text(){
    return text_;
}

const std::string &Text::text() const{
    return text_;
}

void Text::rotate(float angle) {
    angle_ += angle;
}

void Text::move(Point new_base) {
    center_ = new_base;
}

std::string Text::get_info() {
    return std::string("Text. Center:") + center_ +
           "; info: \"" + text_ +
           "\"; font size: " + std::to_string(font_size_) +
           "; angle: " + std::to_string(angle_);;
}

