#include <iostream>

#include "nypizzastore.h"
#include "chicagopizza.h"

int main() {
    PizzaStore* nyPizzaStore = new NYPizzaStore();
    nyPizzaStore->orderPizza(string("cheese"));

    return 0;

}