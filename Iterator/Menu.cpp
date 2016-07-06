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
    return 0;
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

namespace Composite {


/*--------------------迭代器与组合模式-------------------*/

/*---UnsupportedOperation---*/

    const char *UnsupportedOperation::what() {
        return "不支持的操作";
    }


/*---MenuComponent---*/



    void MenuComponent::add(MenuComponent *menuComponent) {
        throw new UnsupportedOperation();
    }

    void MenuComponent::remove(MenuComponent *menuComponent) {
        throw new UnsupportedOperation();
    }

    MenuComponent * MenuComponent::getChild(int i) {
        throw new UnsupportedOperation();
    }

    string MenuComponent::getName() {
        throw new UnsupportedOperation();
    }

    string MenuComponent::getDescription() {
        throw new UnsupportedOperation();
    }

    float MenuComponent::getPrice() {
        throw new UnsupportedOperation();
    }

    bool MenuComponent::isVegetarian() {
        throw new UnsupportedOperation();
    }

    void MenuComponent::print() {
        throw new UnsupportedOperation();
    }


    //MenuItem
    MenuItem::MenuItem(string name, string des,bool veg, float price):
    name(name),description(des),vegetarian(veg),price(price){ }

    string MenuItem::getName() {
        return name;
    }

    string MenuItem::getDescription() {
        return description;
    }

    float MenuItem::getPrice() {
        return price;
    }

    bool MenuItem::isVegetarian() {
        return vegetarian;
    }

    void MenuItem::print() {
        cout<<name<<"\t"<<price<<"\t"<<description<<"\t";
        if(vegetarian) cout<<"v"<<"\t";
        cout<<endl;
    }


    //Menu
    Menu::Menu(const string &name, const string &description) : name(name), description(description) {

    }

    void Menu::add(MenuComponent *menuComponent) {
        menuComponents.push_back(menuComponent);
        //menuComponents[0].print();
    }

    void Menu::remove(MenuComponent *menuComponent) {
        for(auto iter = menuComponents.begin();
            iter!=menuComponents.end(); iter++){
            if((*iter) == menuComponent){
                menuComponents.erase(iter);
            }
        }
    }

    MenuComponent * Menu::getChild(int i) {
        return menuComponents[i];
    }

    string Menu::getName() {
        return name;
    }

    string Menu::getDescription() {
        return description;
    }

    void Menu::print() {
        cout<<name<<"\t"<<description<<endl;
        for(auto i = menuComponents.begin();
                i!=menuComponents.end();i++){
            (*i)->print();
        }
    }





}

