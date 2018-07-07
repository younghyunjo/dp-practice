//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_1_PIZZAINGREDIENTFACTORY_H
#define INC_3_1_PIZZAINGREDIENTFACTORY_H

#include <iostream>
#include "dough.h"


class PizzaIngredientFactory {
public:
    virtual Dough* createDough() = 0;
};

#endif //INC_3_1_PIZZAINGREDIENTFACTORY_H
