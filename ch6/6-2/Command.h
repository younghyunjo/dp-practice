//
// Created by younghyun on 18. 7. 14.
//

#ifndef INC_6_2_COMMAND_H
#define INC_6_2_COMMAND_H

class Command {
public:
    virtual void execute() = 0;
    virtual void undo() = 0;
    virtual ~Command() {}
};

#endif //INC_6_2_COMMAND_H
