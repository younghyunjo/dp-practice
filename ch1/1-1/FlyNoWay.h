#ifndef _FLY_NO_WAY_H_
#define _FLY_NO_WAY_H_

#include <iostream>

#include "FlyBehavior.h"

class FlyNoWay : public FlyBehavior {
public:
    void fly() {
        std::cout << "I can`t fly" << "\n";
    }
};

#endif //#ifndef _FLY_NO_WAY_H_
