//
// Created by younghyun on 18. 7. 25.
//

#ifndef INC_10_1_HASQUARTERSTATE_H
#define INC_10_1_HASQUARTERSTATE_H

#include "State.h"
#include "GumballMachine.h"


class HasQuarterState : public State {
public:
    HasQuarterState(GumballMachine*);
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();
private:
    GumballMachine* gumballMachine;
};


#endif //INC_10_1_HASQUARTERSTATE_H
