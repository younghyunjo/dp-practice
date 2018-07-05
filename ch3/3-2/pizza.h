//
// Created by younghyun on 18. 7. 9.
//

#ifndef INC_3_1_PIZZA_H
#define INC_3_1_PIZZA_H

#include <iostream>
#include <vector>

using namespace std;

class Pizza {
public:
    string name;
    string dough;
    string sauce;
    vector<string> toppings;

    void prepare() {
        cout << "Preparing " + name << endl;

        cout << "Toppings : ";
        for (auto t : toppings) {
            cout << t << " ";
        }
        cout << endl;
    }

    void bake() {
        cout << "baking" << endl;
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
