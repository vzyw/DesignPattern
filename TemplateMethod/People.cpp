//
// Created by vzyw on 16/6/5.
//

#include "People.h"

void People::celebrateSpringFestival() {
    this->subscribeTicket();
    this->travel();
    this->celebrate();
}

void People::celebrate() { }
void People::subscribeTicket() { }

void PeopleA::travel() {
    cout << "trave by train";
}


void PeopleB::travel() {
    cout << "trave by plane";
}