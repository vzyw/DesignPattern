//
// Created by vzyw on 7/3/16.
// 单例模式
//

#ifndef DESIGNPATTERN_SINGLETON_H
#define DESIGNPATTERN_SINGLETON_H

#include <iostream>
using namespace std;
//单线程模式适用
class Singleton {
private:
    Singleton();
    static Singleton * uniqueInstance;
public:
    static Singleton * getInstance();
};


//单线程模式适用
class SingletonMultithread {
private:
    SingletonMultithread * uniqueInstance;
    SingletonMultithread();
public:
    SingletonMultithread * getInstance();
};


#endif //DESIGNPATTERN_SINGLETON_H
