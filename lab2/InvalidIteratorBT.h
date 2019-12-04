//
// Created by dmo on 09.10.2019.
//

#ifndef SOFTWARE_DESIGN_INVALIDITERATORBT_H
#define SOFTWARE_DESIGN_INVALIDITERATORBT_H

#include "BTException.h"

class InvalidIteratorBT : public BTException {
public:
    inline InvalidIteratorBT(const char *msg)
            : BTException(msg) {}
};

#endif //SOFTWARE_DESIGN_INVALIDITERATORBT_H
