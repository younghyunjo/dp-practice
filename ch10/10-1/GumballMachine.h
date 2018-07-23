//
// Created by younghyun on 18. 7. 24.
//

#ifndef INC_10_1_GUMBALLMACHINE_H
#define INC_10_1_GUMBALLMACHINE_H

#include "State.h"

class GumballMachine {
public:
    GumballMachine(int count);

    void setState(State* state);
    State* getHasQuarterState();
    State* getNoQuarterState();

    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();

private:
    State* state;
    State* noQuarterState;
    State* hasQuarterState;
    int count;
};


#endif //INC_10_1_GUMBALLMACHINE_H
