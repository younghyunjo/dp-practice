//
// Created by younghyun on 18. 7. 18.
//

#ifndef INC_6_2_FAN_H
#define INC_6_2_FAN_H

#include <iostream>
#include "Command.h"

class Fan {
public:
    void on() {
        std::cout << "Fan in on speed is" << speed << std::endl;
    }

    void off() {
        std::cout << "Fan in off" << std::endl;
    }

    enum Speed {
        LOW,
        MID,
        HIGH,
    };

    Speed getSpeed() {
        return speed;
    }

    void setSpeed(Speed speed) {
        this->speed = speed;
        std::cout << "Fan speed set " << speed << std::endl;
    }

private:
    Speed speed = LOW;
};

class FanOnCommand : public Command {
public:
    FanOnCommand(Fan* fan) {
        this->fan = fan;
    }

    void execute() {
        fan->on();
        prevSpeed = fan->getSpeed();
    }

    void undo() {
        fan->setSpeed(prevSpeed);
    }

private:
    Fan* fan;
    Fan::Speed prevSpeed;
};

class FanOffCommand : public Command {
public:
    FanOffCommand(Fan* fan) {
        this->fan = fan;
    }

    void execute() {
        prevSpeed = fan->getSpeed();
        fan->off();
    }

    void undo() {
        fan->setSpeed(prevSpeed);
        fan->on();
    }

private:
    Fan* fan;
    Fan::Speed prevSpeed;
};

#endif //INC_6_2_FAN_H
