//
// Created by younghyun on 18. 7. 17.
//

#ifndef INC_6_1_LIGHT_H
#define INC_6_1_LIGHT_H

#include <iostream>
#include "command.h"

class Light {
public:
    void on() {
        std::cout << "Light On" << std::endl;
    }
};

class LightOnCommand : public Command {
public:
    LightOnCommand(Light light) {
        this->light = light;
    }

    void execute() {
        light.on();
    }
    //~LightOnCommand() {}

private:
    Light light;
};

#endif //INC_6_1_LIGHT_H
