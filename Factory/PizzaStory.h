//
// Created by vzyw on 7/2/16.
//  情景 : pizza店提供不同种类的pizza,且pizza口味有多种
//

#ifndef DESIGNPATTERN_PIZZASTORY_H
#define DESIGNPATTERN_PIZZASTORY_H

#include <iostream>
using  namespace std;
class Pizza;
//抽象工厂类
class PizzaStory {
protected:
    virtual Pizza * createPizza(string type) = 0;
public:
    shared_ptr<Pizza> orderPizza(string type);
};

//工厂类
//纽约工厂
class NyPizzaStory:public PizzaStory{
protected:
    Pizza * createPizza(string type);
};

//芝加哥工厂
class ChicagoPizzaStory:public PizzaStory{
protected:
    Pizza * createPizza(string type);
};





class Pizza{
protected:
    string name;
    string sauce;
public:
    //每个pizza都要准备和装箱..等一系列操作
    Pizza();
    virtual void prepare();
    virtual void box();
    virtual string getName();
};

class NyPizza1:public Pizza{
public:
    NyPizza1();
};

class ChiPizza1 :public Pizza{
public:
    ChiPizza1();
};
class ChiPizza2:public Pizza{
public:
    ChiPizza2();
};



#endif //DESIGNPATTERN_PIZZASTORY_H
