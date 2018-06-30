#include <iostream>

#include "QuackBehavior.h"

class Quack : public QuackBehavior {
public:
    void quack() {
        std::cout << "Quack" << "\n";
    }
};