//
// Created by vzyw on 7/5/16.
// 迭代器模式,为遍历不同数据结构提供统一接口,这样用户可以
// 无需了解类内部是怎么实现的.
//

#ifndef DESIGNPATTERN_MENU_H
#define DESIGNPATTERN_MENU_H


#include <iostream>
#include<exception>
#include <vector>
#include <list>

using namespace std;

class MenuItem;

//Iterator 接口
class Iterator{
public:
    virtual const virtual void* next() = 0;
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

namespace Composite {


/*--------------------迭代器与组合模式-------------------*/
//组合模式:允许将对象组合成树型结构来表现"整体/部分"层次结构,组合能让客户
//以一致的方式处理对象以及对象组合


//假设菜单条目中有子菜单



//异常类
    class UnsupportedOperation : public exception {
    public:
        virtual const char *what();
    };


//菜单组件
    class MenuComponent {
    public:
        //这些方法用于组合对象 添加 删除 获取
        virtual void add(MenuComponent *menuComponent);

        virtual void remove(MenuComponent *menuComponent);

        virtual MenuComponent * getChild(int i);

        //这些方法用于单个菜单的操作
        virtual string getName();

        virtual string getDescription();

        virtual float getPrice();

        virtual bool isVegetarian();

        virtual void print();
    };


    //菜单单项
    class MenuItem:public MenuComponent{
    protected:
        string name;
        string description;
        bool vegetarian;
        float price;
    public:
        MenuItem(string name,string des,bool veg, float price);
        string getName();
        string getDescription();
        float getPrice();
        bool isVegetarian();
        void print();

    };

    //菜单集合
    class Menu:public MenuComponent{
    protected:
        vector<MenuComponent*> menuComponents;
        string name;
        string description;
    public:

        Menu(const string &name, const string &description);

        virtual void add(MenuComponent *menuComponent) override;

        virtual void remove(MenuComponent *menuComponent) override;

        virtual MenuComponent * getChild(int i) override;

        virtual string getName() override;

        virtual string getDescription() override;

        virtual void print() override;

    };


    /*----构建一个组合类的迭代器----*/
}


#endif //DESIGNPATTERN_MENU_H
