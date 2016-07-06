//
// Created by vzyw on 7/5/16.
//

#include "Menu.h"


//ShopAIterator
ShopAIterator::ShopAIterator(vector<MenuItem> list) {
    menuList = list;
    pos = 0;
}

const void* ShopAIterator::next() {
    if(hasNext())return &menuList[pos++];
}

bool ShopAIterator::hasNext() {
    if(pos<menuList.size())return true;
    return false;
}


//ShopBIterator
ShopBIterator::ShopBIterator(list<MenuItem> menuList) {
    this->menuList = menuList;
    pos = 0;
}

const void* ShopBIterator::next() {
    if(hasNext()){
        int tmp = pos;
        list<MenuItem>::iterator iter = menuList.begin();
        while (tmp--){
            iter++;
        }
        pos++;
        return &(*iter);
    }
    return 0;
}
bool ShopBIterator::hasNext() {
    if(pos < menuList.size())return true;
    return false;
}




//MenuItem

MenuItem::MenuItem(string name, float price) {
    this->name = name;
    this->price = price;
}

string MenuItem::getName() {
    return name;
}



//ShopAMenu
ShopAMenu::ShopAMenu() {
    //menuList =vector<MenuItem>();
    addMenuItem("Afood1",10.1);
    addMenuItem("Afood2",2.1);
}
void ShopAMenu::addMenuItem(string name, float price) {
    menuList.push_back(MenuItem(name,price));
}

Iterator* ShopAMenu::getIterator() {
    return new ShopAIterator(menuList);
}


//ShopBMenu
ShopBMenu::ShopBMenu() {
    addMenuItem("Bfood1",1.2);
    addMenuItem("Bfood2",3.3);
}
void ShopBMenu::addMenuItem(string name, float price) {
    menuList.push_back(MenuItem(name,price));
}

Iterator * ShopBMenu::getIterator() {
    return new ShopBIterator(menuList);
}




