//
// Created by vzyw on 7/3/16.
//

#include "Singleton.h"

Singleton * Singleton::uniqueInstance = nullptr;
Singleton::Singleton() { }
Singleton* Singleton::getInstance(){
    if(uniqueInstance == nullptr){
        uniqueInstance = new Singleton();
    }
    return uniqueInstance;
}

SingletonMultithread::SingletonMultithread() { }
SingletonMultithread* SingletonMultithread::getInstance() {

/*
 * 该方法多线程情况下大量lock()会阻塞线程,影响性能;
    lock();
    if(uniqueInstance == NULL){
        uniqueInstance = new SingletonMultithread();
    }
    unlock();
    return uniqueInstance;
*/
    if(uniqueInstance == NULL){
        //lock();
        if(uniqueInstance == NULL){
            uniqueInstance = new SingletonMultithread();
        }
        //unlock();
    }
    return uniqueInstance;
}