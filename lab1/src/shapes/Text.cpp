#include <utility>

#include "Text.h"

Text::Text(std::string text) : Shape(), text_(std::move(text)), font_size_(8) {}


Text::Text(std::string text, size_t font_size ): Shape(), text_(std::move(text)) {
    font_size_ = font_size ? font_size : 8;
}

size_t &Text::font_size() { return font_size_; }
const size_t &Text::font_size() const { return font_size_; }

void Text::scale(float value) {
    if (value > 0)
        font_size_ *= value;
}

std::string &Text::text(){
    return text_;
}

const std::string &Text::text() const{
    return text_;
}

std::string Text::get_info() const {
    return std::string("Text. Center:") + center_ +
           "; info: \"" + text_ +
           "\"; font size: " + std::to_string(font_size_) +
           "; angle: " + std::to_string(angle_) +
           std::string("; id: ") + std::to_string(id_);
}

