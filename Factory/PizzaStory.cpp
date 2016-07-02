//
// Created by vzyw on 7/2/16.
//

#include "PizzaStory.h"


shared_ptr<Pizza> PizzaStory::orderPizza(string type) {
    shared_ptr<Pizza> pizza;

    //createPizza 由子类来决定到底做什么pizza
    pizza = shared_ptr<Pizza>(createPizza(type));

    pizza->prepare();
    pizza->box();
    return pizza;
}


//工厂实现
Pizza* NyPizzaStory::createPizza(string type) {
    if(type == "NyPizza1")
        return new NyPizza1();
    return new Pizza();
}

Pizza* ChicagoPizzaStory::createPizza(string type) {
    if(type == "ChiPizza1"){
        return new ChiPizza1();
    }
    if(type == "ChiPizza2"){
        return new ChiPizza2();
    }

    return new Pizza();
}


//pizza实现
Pizza::Pizza() {
    name = "null";
}
void Pizza::prepare() {
    cout<<"prepare....."<<endl;
}
void Pizza::box() {
    cout<<"boxing....."<<endl;
}
string Pizza::getName() {
    return name;
}

NyPizza1::NyPizza1() {
    name = "Nypizza1";
    sauce = "NySauce";
}

ChiPizza1::ChiPizza1() {
    name = "ChiPizza1";
    sauce = "Chi1Sauce";
}

ChiPizza2::ChiPizza2() {
    name = "ChiPizza2";
    sauce = "Chi2Sauce";
}