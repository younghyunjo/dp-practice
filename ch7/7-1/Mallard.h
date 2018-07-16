//
// Created by younghyun on 18. 7. 18.
//

#ifndef INC_7_1_MALLARD_H
#define INC_7_1_MALLARD_H

#include <iostream>
#include "Duck.h"

class MallardDuck : public Duck {
public:
    void quack() {
        std::cout << "Mallard Duck QUACK" << std::endl;
    }

    void fly() {
        std::cout << "Mallard Duck FLY" << std::endl;
    }
private:
};

#endif //INC_7_1_MALLARD_H
