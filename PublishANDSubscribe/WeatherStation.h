//
// Created by vzyw on 6/29/16.
//

#ifndef DESIGNPATTERN_WEATHERSTATION_H
#define DESIGNPATTERN_WEATHERSTATION_H


#include <iostream>
#include <vector>
using  namespace std;
class Observer{
public:
    virtual void update(float temperature,float humidity) = 0;
};
using namespace std;

class WeatherStation {
private:
    float temperature;
    float humidity;
    vector<Observer *> observers;
public:
    void changeData(float temperature, float humidity);
    void registerObserver( Observer * observer);
    void unRegister(  Observer * observer);
    void notifier();
};



#endif //DESIGNPATTERN_WEATHERSTATION_H
