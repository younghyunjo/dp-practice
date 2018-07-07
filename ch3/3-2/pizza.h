//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_1_PIZZA_H
#define INC_3_1_PIZZA_H

#include <iostream>
#include <vector>

#include "pizzaingredientfactory.h"

using namespace std;

class Pizza {
public:
    string name;
    string dough;
    vector<string> toppings;

    virtual void prepare() = 0;

    void bake() {
        cout << "bake" << endl;
    }

    void cut () {
        cout << "cutting" << endl;
    }

    void box () {
        cout << "boxing" << endl;
    }

    string getName() {
        return name;
    }
};

#endif //INC_3_1_PIZZA_H
