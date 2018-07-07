//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_1_NYPIZZAINGREDIENT_H
#define INC_3_1_NYPIZZAINGREDIENT_H

#include "pizzaingredientfactory.h"
#include "thindough.h"

class NyPizzaIngredient : public PizzaIngredientFactory {
public:
    Dough* createDough() {
        return new ThinDough();
    }
};

#endif //INC_3_1_NYPIZZAINGREDIENT_H
