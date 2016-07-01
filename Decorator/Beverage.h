//
// Created by vzyw on 7/1/16.
//

/*
 * 装饰模式
 * 情景:
 *  某一个饮料店出售种饮料,咖啡,带牛奶的咖啡,带牛奶带糖的咖啡,双份牛奶的咖啡
*/
#ifndef DESIGNPATTERN_BEVERAGE_H
#define DESIGNPATTERN_BEVERAGE_H

#include <iostream>
using namespace std;
//抽象饮料类
class Beverage{
protected:
    string description;
public:
    virtual string getDescription();
    virtual float cost() = 0;
};

//装饰类
class Condiment:public Beverage{
public:
    virtual string getDescription() = 0;
};



//饮料类

class Coffee : public Beverage{
public:
    Coffee();
    float cost();
};


class HouseBlend : public Beverage{
public:
    HouseBlend();
    float cost();
};



//装饰类

class Milk:public Condiment{
private:
    shared_ptr<Beverage> beverage;
public:
    Milk(shared_ptr<Beverage>);
    string getDescription();
    float cost();
};

class Surge:public Condiment{
private:
    shared_ptr<Beverage> beverage;
public:
    Surge(shared_ptr<Beverage>);
    string getDescription();
    float cost();
};
#endif //DESIGNPATTERN_BEVERAGE_H
