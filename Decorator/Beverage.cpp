//
// Created by vzyw on 7/1/16.
//

#include "Beverage.h"
string Beverage::getDescription() {
    return description;
}



//饮料类实现
Coffee::Coffee() {
    description = "Coffee";
}

float Coffee::cost() {
    return 1.99;
}

HouseBlend::HouseBlend() {
    description = "HoseBlend";
}
float HouseBlend::cost() {
    return 3.99;
}


//装饰类实现
Milk::Milk(shared_ptr<Beverage> beverage) {
    this->beverage = beverage;
}
float Milk::cost() {
    //加牛奶 加1元
    return 1.0 + beverage->cost();
}

string Milk::getDescription() {
    return beverage->getDescription() + " Milk ";
}


Surge::Surge(shared_ptr<Beverage> beverage) {
    this->beverage = beverage;
}

float Surge::cost() {
    return 0.1+beverage->cost();
}

string Surge::getDescription() {
    return beverage->getDescription()+ " Surge ";
}

