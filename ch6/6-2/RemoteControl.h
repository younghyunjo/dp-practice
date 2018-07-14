//
// Created by younghyun on 18. 7. 14.
//

#ifndef INC_6_2_REMOTECONTROL_H
#define INC_6_2_REMOTECONTROL_H

#include "Command.h"

class RemoteControl {

public:
    RemoteControl() {
        onCommands = new Command*[7];
        offCommands = new Command*[7];
    }

    void setCommand(int slot, Command* onCommand, Command* offCommand) {
        onCommands[slot] = onCommand;
        offCommands[slot] = offCommand;
    }

    void onButtunWasPressed(int slot) {
        onCommands[slot]->execute();
        undoCommand = onCommands[slot];
    }

    void offButtonWasPressed(int slot) {
        offCommands[slot]->execute();
        undoCommand = offCommands[slot];
    }

    void undoButtonWasPressed() {
        undoCommand->undo();
    }

private:
    Command** onCommands;
    Command** offCommands;
    Command* undoCommand;
};

#endif //INC_6_2_REMOTECONTROL_H
