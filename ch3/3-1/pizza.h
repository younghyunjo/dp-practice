//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_2_PIZZA_H
#define INC_3_2_PIZZA_H

#include <iostream>

class Pizza {
public:
    std::string name;

    virtual void prepare() {
        std::cout << "Prepare:" << name << std::endl;
    };
    void bake() {};
    void cut() {};
    void box() {};
};

class CheesePizza : public Pizza {
public:
    CheesePizza() {
        name = "Cheese";
    }
};

class HamPizza : public Pizza {
public:
    HamPizza() {
        name = "Ham";
    }
};

#endif //INC_3_2_PIZZA_H
