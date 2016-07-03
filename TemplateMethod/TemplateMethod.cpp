//
// Created by vzyw on 7/3/16.
//

#include "TemplateMethod.h"


void TemplateMethod::fun1() {
    //doSomething
    cout<<"base fun1 process..."<<endl;
}
bool TemplateMethod::fun3() {
    return true;
}

void TemplateMethod::fun4() {
    //doSomething
    cout<<"base fun4 process..."<<endl;
}




void SubClass::fun1() {
    cout<<"subClass fun1"<<endl;
}

void SubClass::fun2() {
    cout<<"subClass fun2"<<endl;
}

bool SubClass::fun3() {
    return false;
}


void SubClass2::fun2() {
    cout<<"subclass fun2"<<endl;
}
