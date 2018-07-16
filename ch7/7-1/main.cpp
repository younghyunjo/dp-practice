#include <iostream>

#include "Mallard.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"

int main() {
    MallardDuck mallardDuck;

    WildTurkey wildTurkey;
    TurkeyAdapter turkeyAdapter(&wildTurkey);

    turkeyAdapter.quack();
    turkeyAdapter.fly();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}