
#include "TemplateMethod/People.h"
#include "PublishANDSubscribe/WeatherBoard.h"
#include "Decorator/Beverage.h"
#include "Factory/PizzaStory.h"
#include "TemplateMethod/TemplateMethod.h"
#include "Iterator/Menu.h"
#include "Delegate/Delegate.h"
using namespace std;


int main() {

/*
    //templateMethod  test
    People *p1 = new PeopleA(),*p2 = new PeopleB();
    p1->celebrateSpringFestival();
    p2->celebrateSpringFestival();
*/

/*
    TemplateMethod * templateMethod = new SubClass;
    templateMethod->function();
    delete (templateMethod);
    templateMethod = new SubClass2;
    templateMethod->function();
*/

/*
    //pub&sub test
    Board1 board1;
    Board2 board2;
    WeatherStation a;
    a.registerObserver(&board1);//注册观察者
    a.registerObserver(&board2);


    a.changeData(10.1,20);  //发布消息
    a.unRegister(&board1);
    a.changeData(12.5,20);
*/

/*
     //decotator test
    shared_ptr<Beverage> beverage1(new Coffee);     //一杯coffe
    shared_ptr<Beverage> beverage2(new HouseBlend);
    //两份牛奶的coffee
    beverage1 = shared_ptr<Beverage>(new Milk(beverage1));
    beverage1 = shared_ptr<Beverage>(new Milk(beverage1));

    cout<< beverage1->getDescription()<<" cost:"<<beverage1->cost();
    //一份牛奶一份糖的houseblend;
    beverage2 = shared_ptr<Beverage>(new Milk(beverage2));
    beverage2 = shared_ptr<Beverage>(new Surge(beverage2));

    cout<<endl;

    cout<<beverage2->getDescription()<<" cost:"<<beverage2->cost();
*/

/*
    //Factory test
    PizzaStory * factory = new NyPizzaStory();
    shared_ptr<Pizza> pizza= factory->orderPizza("hahaPizza");
    cout<<pizza->getName()<<endl;
    pizza = fac->orderPizza("NyPizza1");
    cout<<pizza->getName()<<endl;

    delete(factory);
    factory = new ChicagoPizzaStory();
    pizza = factory->orderPizza("ChiPizza2");
    cout<<pizza->getName()<<endl;
*/
/*

    */
/*----iterator test----*//*

    ShopAMenu shopAMenu;
    ShopBMenu shopBMenu;
    Iterator * p = shopAMenu.getIterator();
    Iterator * q = shopBMenu.getIterator();
    cout<<((MenuItem *)(p->next()))->getName();
    cout<<((MenuItem *)(p->next()))->getName();

    cout<<((MenuItem *)(q->next()))->getName();
    cout<<((MenuItem *)(q->next()))->getName();

    */
/*----Iterator-Composite test----*//*


    using Composite::MenuComponent;
    using Composite::Menu;
    try {
        //三份菜单集合
        MenuComponent * menu1 = new Menu("menu1","\"this is menu1\"");
        MenuComponent * menu2 = new Menu("menu2","\"this is menu2\"");
        //MenuComponent * menu3 = new Menu("menu3","this is menu3");

        MenuComponent * allMenu = new Menu("allMenu","\"this is all menu\"");

        allMenu->add(menu1);
        allMenu->add(menu2);

        MenuComponent *f1 = new Composite::MenuItem("m1Food1","\"menu1 food1\"",true,1.1);
        MenuComponent *f2 = new Composite::MenuItem("m1Food2","\"menu1 food2\"",false,3.1);
        menu1->add(f1);
        menu1->add(f2);

        MenuComponent *m2f1 = new Composite::MenuItem("m2Food1","menu2 food1",false,5.1);
        MenuComponent * menu2_childMenu = new Menu("menu2_childMenu","\"this is menu2_childMenu\"");

        MenuComponent *m2_childFood1 = new Composite::MenuItem("menu2_childMenuFood1","\"menu2_childMenu food1\"",false,6.1);
        MenuComponent *m2_childFood2 = new Composite::MenuItem("menu2_childMenuFood2","\"menu2_childMenu food2\"",true,10.1);
        menu2_childMenu->add(m2_childFood1);
        menu2_childMenu->add(m2_childFood2);

        menu2->add(m2f1);
        menu2->add(menu2_childMenu);
        allMenu->print();
    }catch(Composite::UnsupportedOperation * e) {
        cout<<(*e).what();
    }
*/

    /*Delegetae test*/
    ProxyObject proxyObject;
    proxyObject.someOperation();

}

