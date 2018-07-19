#include <iostream>
#include "GumballMachine.h"

int main() {
    GumballMachine gumballMachine(5);
    gumballMachine.insertQuarter();
    gumballMachine.turnCrank();
    gumballMachine.turnCrank();
    gumballMachine.dispense();

    return 0;
}