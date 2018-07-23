//
// Created by younghyun on 18. 7. 25.
//

#ifndef INC_10_1_STATE_H
#define INC_10_1_STATE_H


class State {
public:
    virtual void insertQuarter() = 0;
    virtual void ejectQuarter() = 0;
    virtual void turnCrank() = 0;
    virtual void dispense() = 0;
};


#endif //INC_10_1_STATE_H
