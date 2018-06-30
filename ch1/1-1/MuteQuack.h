#include <iostream>

#include "QuackBehavior.h"

class MuteQuack : public QuackBehavior {
public:
    void quack() {
        std::cout << "Mute" << "\n";
    }
};