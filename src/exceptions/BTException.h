//
// Created by dmo on 09.10.2019.
//

#ifndef SOFTWARE_DESIGN_BTEXCEPTION_H
#define SOFTWARE_DESIGN_BTEXCEPTION_H

#include <string>

class BTException {
public:
    BTException() = default;
    inline explicit BTException(const std::string &msg)
            : _msg(msg) {}

    inline std::string what() const {
        return _msg;
    }

protected:
    std::string _msg;
};

#endif //SOFTWARE_DESIGN_BTEXCEPTION_H
