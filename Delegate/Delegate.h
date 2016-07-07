//
// Created by vzyw on 7/7/16.
//

#ifndef DESIGNPATTERN_DELEGATE_H
#define DESIGNPATTERN_DELEGATE_H

#include <iostream>
using namespace std;
//interface
class DelegateInterface{
public:
    virtual  void someOperation() = 0;
};

class TrueObject:public DelegateInterface{
public:
    virtual void someOperation() override;
};


class ProxyObject:public DelegateInterface{
private:
    TrueObject * trueObject;
public:
    ProxyObject();
    virtual void someOperation() override;
    ~ProxyObject();
};

#endif //DESIGNPATTERN_DELEGATE_H
