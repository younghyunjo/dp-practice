#include <iostream>

#include "pizzastore.h"
#include "pizza.h"
#include "simplepizzafactory.h"


int main() {
    SimplePizzaFactory* f = new SimplePizzaFactory();
    PizzaStore* ps = new PizzaStore(f);
    ps->orderPizza(std::string("cheese"));

    std::cout << "Hello, World!" << std::endl;
    return 0;
}