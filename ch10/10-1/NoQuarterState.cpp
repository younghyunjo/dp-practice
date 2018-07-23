//
// Created by younghyun on 18. 7. 25.
//

#include <iostream>

#include "NoQuarterState.h"
#include "GumballMachine.h"

NoQuarterState::NoQuarterState(GumballMachine* gumballMachine) :
        gumballMachine{gumballMachine} {}

void NoQuarterState::insertQuarter() {
    std::cout << "동전을 넣으셨습니다" << std::endl;
    gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter() {
    std::cout << "동전을 넣어주세요" << std::endl;
}

void NoQuarterState::turnCrank() {
    std::cout << "동전을 넣어주세요" << std::endl;
}

void NoQuarterState::dispense() {
    std::cout << "동전을 넣어주세요" << std::endl;
}