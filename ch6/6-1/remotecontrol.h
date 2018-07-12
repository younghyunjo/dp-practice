//
// Created by younghyun on 18. 7. 17.
//

#ifndef INC_6_1_REMOTECONTROL_H
#define INC_6_1_REMOTECONTROL_H

#include "command.h"

class SimpleRemoteControl {
public:
    SimpleRemoteControl() {}

    void setCommand(Command* command) {
        slot = command;
    }

    void buttonPressed() {
        slot->execute();
    }

private:
    Command* slot;
};


#endif //INC_6_1_REMOTECONTROL_H
