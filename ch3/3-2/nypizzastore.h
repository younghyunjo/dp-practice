//
// Created by younghyun on 18. 7. 9.
//


#ifndef INC_3_1_NYPIZZASTORE_H
#define INC_3_1_NYPIZZASTORE_H

#include "pizzastore.h"
#include "cheesepizza.h"
#include "nypizzaingredient.h"

class NYPizzaStore : public PizzaStore {
public:
    Pizza* createPizza(string type) override  {
        if (type == "cheese") {
            return new CheesePizza(pif);
        }
        return NULL;
    }

private:
    PizzaIngredientFactory* pif = new NyPizzaIngredient();
};

#endif //INC_3_1_NYPIZZASTORE_H
