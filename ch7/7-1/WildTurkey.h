//
// Created by younghyun on 18. 7. 18.
//

#ifndef INC_7_1_WILDTURKEY_H
#define INC_7_1_WILDTURKEY_H

#include <iostream>
#include "Turkey.h"

class WildTurkey : public Turkey {
public:
    void gobble() override {
        std::cout << "WildTurkey GOBBLE" <<std::endl;
    }

    void fly() override {
        std::cout << "WildTurkey FLY" <<std::endl;
    }
private:
};

#endif //INC_7_1_WILDTURKEY_H
