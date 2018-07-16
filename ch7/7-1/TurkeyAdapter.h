//
// Created by younghyun on 18. 7. 18.
//

#ifndef INC_7_1_TURKEYADAPTER_H
#define INC_7_1_TURKEYADAPTER_H

#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck {
public:
    TurkeyAdapter(Turkey* turkey) {
        this->turkey = turkey;
    }

    void quack() {
        turkey->gobble();
    }

    void fly() {
        turkey->fly();
        turkey->fly();
        turkey->fly();
    }

private:
    Turkey* turkey;
};

#endif //INC_7_1_TURKEYADAPTER_H
