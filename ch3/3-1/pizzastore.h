//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_2_PIZZASTORE_H
#define INC_3_2_PIZZASTORE_H

#include "simplepizzafactory.h"
#include "pizza.h"

class PizzaStore {
public:
    PizzaStore(SimplePizzaFactory* factory) {
        this->factory = factory;
    }

    Pizza* orderPizza(std::string type) {
        Pizza* m_pizza = factory->createPizza(type);
        m_pizza->prepare();
    }

private:
    SimplePizzaFactory* factory;
};

#endif //INC_3_2_PIZZASTORE_H
