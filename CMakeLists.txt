cmake_minimum_required(VERSION 3.3)
project(designPattern)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp TemplateMethod/People.cpp TemplateMethod/People.h PublishANDSubscribe/WeatherStation.cpp PublishANDSubscribe/WeatherStation.h PublishANDSubscribe/WeatherBoard.cpp PublishANDSubscribe/WeatherBoard.h)
add_executable(designPattern ${SOURCE_FILES})