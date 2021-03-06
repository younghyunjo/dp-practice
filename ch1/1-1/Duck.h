#include <iostream>
#include <memory>

#include "FlyBehavior.h"
#include "QuackBehavior.h"

class Duck
{
public:
	FlyBehavior* flyBehavior;
	QuackBehavior* quackBehavior;
	Duck() {}

	virtual void display() = 0;

	void setFlyBehavior(FlyBehavior* fb) {
		flyBehavior = fb;
	};

	void setQuackBehavior(QuackBehavior* qb) {
		quackBehavior = qb;
	}

	void performQuack() {
		quackBehavior->quack();
	}

	void performFly() {
		flyBehavior->fly();
	}

	void swim() {
		std::cout << "Swim" << "\n";
	}
};

