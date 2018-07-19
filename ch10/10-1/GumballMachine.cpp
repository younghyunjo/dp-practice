//
// Created by younghyun on 18. 7. 24.
//

#include <iostream>

#include "GumballMachine.h"

void GumballMachine::insertQuarter() {
    switch (state) {
        case SOLD_OUT:
            std::cout << "Sold out" << std::endl;
            break;
        case NO_QUARTER:
            std::cout << "Quarter inserted" << std::endl;
            state = HAS_QUARTER;
            break;
        case HAS_QUARTER:
            std::cout << "Quarter already inserted" << std::endl;
            break;
        case SOLD:
            std::cout << "WAIT. Gumball is dispensing" << std::endl;
            break;
    }
}

void GumballMachine::ejectQuarter() {
    switch (state) {
    case SOLD_OUT:
        std::cout << "Sold out" << std::endl;
        break;
    case NO_QUARTER:
        std::cout << "No quarter inserted" << std::endl;
        break;
    case HAS_QUARTER:
        std::cout << "Eject Quarter" << std::endl;
        state = NO_QUARTER;
        break;
    case SOLD:
        std::cout << "WAIT. Gumball is dispensing" << std::endl;
        break;
    }
}

void GumballMachine::turnCrank() {
    switch (state) {
    case SOLD_OUT:
        std::cout << "Sold out" << std::endl;
        break;
    case NO_QUARTER:
        std::cout << "No quarter inserted" << std::endl;
        break;
    case HAS_QUARTER:
        std::cout << "Gumball sold" << std::endl;
        state = SOLD;
        break;
    case SOLD:
        std::cout << "Please turn one time" << std::endl;
        break;
    }
}

void GumballMachine::dispense() {
    switch (state) {
    case SOLD_OUT:
        std::cout << "Sold out" << std::endl;
        break;
    case NO_QUARTER:
        std::cout << "Please insert coin" << std::endl;
        break;
    case HAS_QUARTER:
        std::cout << "Can`t dispense gumball" << std::endl;
        break;
    case SOLD:
        std::cout << "Gumball is dispensing" << std::endl;
        if (--count == 0) {
            state = SOLD_OUT;

        }
        else {
            state = NO_QUARTER;
        }
        break;
    }
}
