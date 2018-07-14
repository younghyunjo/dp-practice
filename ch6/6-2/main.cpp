#include <iostream>

#include "RemoteControl.h"
#include "Light.h"

int main() {
    Light kitchenLight;
    LightOnCommand kitchenLightOnCommand(&kitchenLight);
    LightOffCommand kitchenLightOffCommand(&kitchenLight);

    Light livingRoomLight;
    LightOnCommand livingRoomLightOnCommand(&livingRoomLight);
    LightOffCommand livingRoomLightOffCommand(&livingRoomLight);

    RemoteControl remoteControl;
    remoteControl.setCommand(0, &kitchenLightOnCommand, &kitchenLightOffCommand);
    remoteControl.setCommand(0, &livingRoomLightOnCommand, &livingRoomLightOffCommand);

    remoteControl.onButtunWasPressed(0);
    remoteControl.offButtonWasPressed(0);

    return 0;
}