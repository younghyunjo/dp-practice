//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_1_NYPIZZA_H
#define INC_3_1_NYPIZZA_H

#include "pizza.h"

class NYCheesePizza : public Pizza {
    NYCheesePizza() {
        name = "NY Style Chease Pizza";
        dough = "Thin";
        sauce = "Marinara Sauch";

        toppings.push_back("Plum");
        toppings.push_back("Reggiano");
    }
};

#endif //INC_3_1_NYPIZZA_H
