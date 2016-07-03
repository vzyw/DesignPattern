//
// Created by vzyw on 7/3/16.
//


// 例子 :JAVA中JFram 的paint()方法是一个hook方法,子类不去实现它则不做任何事情.


#ifndef DESIGNPATTERN_TEMPLATEMETHOD_H
#define DESIGNPATTERN_TEMPLATEMETHOD_H

#include <iostream>
using  namespace std;
class TemplateMethod {
public:
    //对外的接口
    void function(){
        //父类定义好执行顺序
        fun1();
        fun2();
        if(fun3()){
            fun4();
        }
    }

protected:
    //子类可以重写这个方法,如果不重写,则调用父类的
    virtual void fun1();
    //要求子类必须实现这个方法
    virtual void fun2()=0;
    //子类可以通过这个方法影响父类的操作.称作hook 钩子.
    //如果子类不提供自己的方法,则父类提供一个默认方法
    virtual bool fun3();

private:
    //子类不能继承的方法
    void fun4();
};



class SubClass:public TemplateMethod{
public:
    void fun1();
    void fun2();
    bool fun3();
};


class SubClass2:public TemplateMethod{
    void fun2();
};

#endif //DESIGNPATTERN_TEMPLATEMETHOD_H
