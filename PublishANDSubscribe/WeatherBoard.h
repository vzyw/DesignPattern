//
// Created by vzyw on 6/29/16.
// 面板从气象站获取消息并且更新数据显示
//

#ifndef DESIGNPATTERN_WEATHERBOARD_H
#define DESIGNPATTERN_WEATHERBOARD_H

#include "WeatherStation.h"

class Board1:public Observer{
public:
    void update(float temperature,float humidity);
};


class Board2:public Observer{
public:
    void update(float temperature,float humidity);
};

#endif //DESIGNPATTERN_WEATHERBOARD_H
