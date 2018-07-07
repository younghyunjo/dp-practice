//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_1_THINDOUGH_H
#define INC_3_1_THINDOUGH_H

#include <iostream>
#include "dough.h"

class ThinDough : public Dough {
public:
    ThinDough () {
        dough = std::string("Thin daugh");
    }
};


#endif //INC_3_1_THINDOUGH_H
