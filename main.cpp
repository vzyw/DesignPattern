
#include "TemplateMethod/People.h"
#include "PublishANDSubscribe/WeatherBoard.h"
#include "Decorator/Beverage.h"
#include "Factory/PizzaStory.h"
#include "TemplateMethod/TemplateMethod.h"
#include "Iterator/Menu.h"
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

    ShopAMenu shopAMenu;
    ShopBMenu shopBMenu;
    Iterator * p = shopAMenu.getIterator();
    Iterator * q = shopBMenu.getIterator();
    cout<<((MenuItem *)(p->next()))->getName();
    cout<<((MenuItem *)(p->next()))->getName();

    cout<<((MenuItem *)(q->next()))->getName();
    cout<<((MenuItem *)(q->next()))->getName();





}

