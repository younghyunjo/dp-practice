//
// Created by younghyun on 18. 7. 25.
//

#ifndef INC_10_1_NOQUARTERSTATE_H
#define INC_10_1_NOQUARTERSTATE_H

#include "State.h"
#include "GumballMachine.h"

class NoQuarterState : public State {
public:
    NoQuarterState(GumballMachine*);
    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;

private:
    GumballMachine* gumballMachine;
};

#endif //INC_10_1_NOQUARTERSTATE_H
