//
// Created by younghyun on 18. 7. 24.
//

#ifndef INC_10_1_GUMBALLMACHINE_H
#define INC_10_1_GUMBALLMACHINE_H


class GumballMachine {
public:
    GumballMachine(int _count) : count{_count}, state{NO_QUARTER} {}
    void insertQuarter();
    void ejectQuarter();
    void turnCrank();
    void dispense();

private:
    enum State {
        SOLD_OUT,
        NO_QUARTER,
        HAS_QUARTER,
        SOLD
    };

    State state {SOLD_OUT};
    int count;
};


#endif //INC_10_1_GUMBALLMACHINE_H
