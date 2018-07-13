#include <iostream>

#include "light.h"
#include "remotecontrol.h"

int main() {
    Light light;
    LightOnCommand lightOnCommand(light);

    SimpleRemoteControl remoteControl;
    remoteControl.setCommand(&lightOnCommand);

    remoteControl.buttonPressed();
    return 0;
}