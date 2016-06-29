//
// Created by vzyw on 16/6/5.
//

#ifndef DESIGNPATTERN_PEOPLE_H
#define DESIGNPATTERN_PEOPLE_H

#include <iostream>
using namespace std;
//templateMethod 用于不同类有同样的方法不同的实现
//抽象基类 c++ 有一个函数为虚函数是 则父类为抽象类
//派生类必须实现纯虚函数
class People {
protected:
    virtual void travel() = 0;
private:
    void  subscribeTicket();
    void celebrate();
public:
    void celebrateSpringFestival();
};


class PeopleA : public People{
protected:
    virtual void travel();
};

class PeopleB : public People{
protected:
    virtual void travel();
};



//回调

#endif //DESIGNPATTERN_PEOPLE_H
