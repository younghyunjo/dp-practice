//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_1_PIZZASTORE_H
#define INC_3_1_PIZZASTORE_H

#include "pizza.h"

class PizzaStore {
    Pizza* orderPizza(string type) {
        Pizza* pizza = createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }

    virtual Pizza* createPizza(string type);
};

#endif //INC_3_1_PIZZASTORE_H
