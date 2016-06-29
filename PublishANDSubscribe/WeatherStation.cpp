//
// Created by vzyw on 6/29/16.
//

#include "WeatherStation.h"

void WeatherStation::changeData(float temperature, float humidity) {
    this->temperature = temperature;
    this->humidity = humidity;
    notifier();
}


void WeatherStation::registerObserver(Observer * observer) {
    this->observers.push_back(observer);
}

void WeatherStation::unRegister(Observer * observer) {
    vector<Observer *>::const_iterator iter = observers.begin();
    while (*iter != observer){
        iter++;
    }
    if(iter!=observers.end()){
        observers.erase(iter);
    }
}

void WeatherStation::notifier() {
    for(auto observer : observers){
        (*observer).update(this->temperature,this->humidity);
    }
}