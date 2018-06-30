#include <iostream>

#include "Duck.h"
#include "Quack.h"
#include "FlyWithWings.h"

class MallarDuck : public Duck {
public:
    MallarDuck() {
        quackBehavior = new Quack();
        flyBehavior = new FlyWithWings();
    }

    void display() {
        std::cout << "I am MallarDuck\n";
    }
};

