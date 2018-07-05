//
// Created by younghyun on 18. 7. 9.
//


#ifndef INC_3_1_CHICAGOPIZZASTORE_H
#define INC_3_1_CHICAGOPIZZASTORE_H

#include "pizzastore.h"
#include "chicagopizza.h"

class ChicagoPizzaStore : public PizzaStore {
    Pizza* createPizza(string type) {
        if (type == "cheese") {
            return new ChicagoCheesePizza();
        }
    }
};

#endif //INC_3_1_CHICAGOPIZZASTORE_H
