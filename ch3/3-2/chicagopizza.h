//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_1_CHICAGOPIZZA_H
#define INC_3_1_CHICAGOPIZZA_H

#include "pizza.h"
#include "pizzaingredientfactory.h"

class ChicagoCheesePizza : public Pizza {
public:
    ChicagoCheesePizza(PizzaIngredientFactory* f) {
        name = "Chicago Cheease Pizza";
        pif = f;
    }

    void prepare() {
        std::cout << pif->createDough() << std::endl;
    }

private:
    PizzaIngredientFactory* pif;

};

#endif //INC_3_1_CHICAGOPIZZA_H
