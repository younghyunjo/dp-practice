#ifndef _MODEL_DUCK_H_
#define _MODEL_DUCK_H_

#include "FlyNoWay.h"

class ModelDuck : public Duck {
public:
	ModelDuck() {
		flyBehavior = new FlyNoWay();
		quackBehavior = new Quack();
	};

	void display() {
		std::cout << "I an ModelDuck\n";
	};

};

#endif //#ifndef _MODEL_DUCK_H_

