//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_2_SIMPLEPIZZAFACTORY_H
#define INC_3_2_SIMPLEPIZZAFACTORY_H

#include <iostream>
#include "pizza.h"

class SimplePizzaFactory {

public:
    Pizza* createPizza(std::string type) {
        Pizza* m_pizza;
        if (type == "cheese") {
            m_pizza = new CheesePizza();
        }
        else if (type == "ham") {
            m_pizza = new HamPizza();
        }

        return m_pizza;
    }
};

#endif //INC_3_2_SIMPLEPIZZAFACTORY_H
