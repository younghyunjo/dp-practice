#include <iostream>
#include "QuackBehavior.h"

class Squeak : public QuackBehavior {
public:
    void quack() {
        std::cout << "Beep" << "\n";
    }
};