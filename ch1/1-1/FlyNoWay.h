#include <iostream>

#include "FlyBehavior.h"

class FlyNoWay : public FlyBehavior {
public:
    void fly() {
        std::cout << "I can`t fly" << "\n";
    }
};
