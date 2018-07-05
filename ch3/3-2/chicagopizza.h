//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_1_CHICAGOPIZZA_H
#define INC_3_1_CHICAGOPIZZA_H

#include "pizza.h"

class ChicagoCheesePizza : public Pizza {
    ChicagoCheesePizza() {
        name = "Chicago Cheease Pizza";
        dough = "Thick";
        sauce = "Mayo";
        toppings.push_back("Pepperoni");
    }
};

#endif //INC_3_1_CHICAGOPIZZA_H
