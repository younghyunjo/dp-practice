#include <iostream>

#include "Duck.h"
#include "Quack.h"
#include "FlyWithWings.h"

class MallardDuck : public Duck {
public:
    MallardDuck() {
        quackBehavior = new Quack();
        flyBehavior = new FlyWithWings();
    }

    void display() {
        std::cout << "I am MallardDuck\n";
    }
};

