#include "FlyBehavior.h"
#include <iostream>

class FlyWithWings : public FlyBehavior {
public:
    void fly() {
        std::cout << "I am flying" << "\n";
    }
};