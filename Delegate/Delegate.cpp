//
// Created by vzyw on 7/7/16.
//

#include "Delegate.h"

void TrueObject::someOperation() {
    cout<<"reallyObject do some complex thing "<<endl;
}

ProxyObject::ProxyObject() {
    trueObject = new TrueObject();
}

ProxyObject::~ProxyObject() {
    delete  trueObject;
}

void ProxyObject::someOperation() {
    cout<<"before reallyObject"<<endl;
    trueObject->someOperation();
    cout<<"after reallyObject"<<endl;
}
