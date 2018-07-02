#include "MallardDuck.h"
#include "ModelDuck.h"

#include "FlyRocketPowered.h"

int main() {
	Duck* mallard = new MallardDuck();
	mallard->performQuack();
	mallard->performFly();

	Duck* model = new ModelDuck();
	model->setFlyBehavior(new FlyRockerPowed());
	model->performFly();
	return 0;
}
