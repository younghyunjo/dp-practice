//
// Created by younghyun on 18. 7. 9.
//


#ifndef INC_3_1_NYPIZZASTORE_H
#define INC_3_1_NYPIZZASTORE_H

#include "pizzastore.h"
#include "nypizza.h"

class NYPizzaStore : public PizzaStore {
    Pizza* createPizza(string type) override  {
        if (type == "cheese") {
            return new NYCheesePizza();
        }
        return NULL;
    }
};

#endif //INC_3_1_NYPIZZASTORE_H
