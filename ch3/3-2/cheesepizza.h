//
// Created by younghyun on 18. 7. 11.
//

#ifndef INC_3_1_CHEESEPIZZA_H
#define INC_3_1_CHEESEPIZZA_H

#include "pizza.h"
#include "pizzaingredientfactory.h"

class CheesePizza : public Pizza {
public:
    CheesePizza(PizzaIngredientFactory* p) {
        pif = p;
        name = string("Cheese");
    }

    void prepare() {
        std::cout << pif->createDough()->dough << std::endl;
    }

private:
    PizzaIngredientFactory* pif;
};

#endif //INC_3_1_CHEESEPIZZA_H
