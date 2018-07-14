//
// Created by younghyun on 18. 7. 14.
//

#ifndef INC_6_2_LIGHT_H
#define INC_6_2_LIGHT_H

#include <iostream>
#include "Command.h"

class Light {
public:
    void on() {
        std::cout << "Light On" << std::endl;
    }
    void off() {
        std::cout << "Light Off" << std::endl;
    }
};

class LightOnCommand : public Command {
public:
    LightOnCommand(Light* light) {
        this->light = light;
    }

    void execute() {
        light->on();
    }

    void undo() {
        light->off();
    }

private:
    Light* light;
};

class LightOffCommand : public Command {
public:
    LightOffCommand(Light* light) {
        this->light = light;
    }

    void execute() {
        light->off();
    }

    void undo() {
        light->on();
    }

private:
    Light* light;
};

#endif //INC_6_2_LIGHT_H
