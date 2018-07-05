#include <iostream>

#include "nypizzastore.h"
#include "chicagopizza.h"

int main() {
    PizzaStore* nyPizzaStore = new NYPizzaStore();
    nyPizzaStore->orderPizza();

    return 0;

}