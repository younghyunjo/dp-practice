#include <iostream>

#include "Fan.h"
#include "Light.h"
#include "RemoteControl.h"

int main() {
    Light kitchenLight;
    LightOnCommand kitchenLightOnCommand(&kitchenLight);
    LightOffCommand kitchenLightOffCommand(&kitchenLight);

    Light livingRoomLight;
    LightOnCommand livingRoomLightOnCommand(&livingRoomLight);
    LightOffCommand livingRoomLightOffCommand(&livingRoomLight);

    Fan bedroomFan;
    FanOnCommand fanOnCommand(&bedroomFan);
    FanOffCommand fanOffCommand(&bedroomFan);

    RemoteControl remoteControl;
    remoteControl.setCommand(0, &kitchenLightOnCommand, &kitchenLightOffCommand);
    remoteControl.setCommand(1, &livingRoomLightOnCommand, &livingRoomLightOffCommand);

    remoteControl.setCommand(2, &fanOnCommand, &fanOffCommand);

    remoteControl.onButtunWasPressed(0);
    remoteControl.offButtonWasPressed(0);

    remoteControl.onButtunWasPressed(2);
    remoteControl.offButtonWasPressed(2);
    remoteControl.undoButtonWasPressed();

    return 0;
}