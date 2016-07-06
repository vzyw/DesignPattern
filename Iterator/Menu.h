//
// Created by vzyw on 7/5/16.
// 迭代器模式,为遍历不同数据结构提供统一接口,这样用户可以
// 无需了解类内部是怎么实现的.
//

#ifndef DESIGNPATTERN_MENU_H
#define DESIGNPATTERN_MENU_H

#include <iostream>
#include <vector>
#include <list>

using namespace std;

class MenuItem;

//Iterator 接口
class Iterator{
public:
    const virtual void* next() = 0;
    virtual bool hasNext() = 0;
};
//vector 和 list 都有迭代器,以下两类只是模拟迭代器实现方法
//A的迭代器
class ShopAIterator:public Iterator{
private:
    vector<MenuItem> menuList;
    int pos;
public:
    ShopAIterator(vector<MenuItem> menuList);
    const void* next();
    bool hasNext();
};

//B的迭代器
class ShopBIterator:public Iterator{
private:
    list<MenuItem> menuList;
    int pos;
public:
    ShopBIterator(list<MenuItem> menuList);
    const void * next();
    bool hasNext();

};




//菜单项
class MenuItem{
private:
    string name;
    float price;
public:
    MenuItem(string name , float price);
    string getName();
    //....
};



//A菜单
class ShopAMenu{
private:
    vector<MenuItem> menuList;
public:
    ShopAMenu();
    void addMenuItem(string name,float price);
    //改为迭代器
    //vector<MenuItem> getMenuList();
    Iterator* getIterator();
};

//B菜单
class ShopBMenu{
private:
    //另外一种数据结构
    list<MenuItem> menuList;
public:
    ShopBMenu();
    void addMenuItem(string name,float price);
    //改为迭代器
    //list<MenuItem> getMenuList();
    Iterator* getIterator();
};



#endif //DESIGNPATTERN_MENU_H
