//
// Created by younghyun on 18. 7. 25.
//

#include <iostream>

#include "HasQuarterState.h"
#include "GumballMachine.h"

HasQuarterState::HasQuarterState(GumballMachine *gumballMachine) :
        gumballMachine{gumballMachine} {
}

void HasQuarterState::insertQuarter() {
    std::cout << "동전은 하나만 넣어주세요." << std::endl;
}

void HasQuarterState::ejectQuarter() {
    std::cout << "동전이 반환됩니다" << std::endl;
    gumballMachine->setState(gumballMachine->getNoQuarterState());
}

