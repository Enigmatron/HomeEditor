//
//  SimpleConditional.cpp
//  HomeEditor
//
//  Created by Idries Kysia on 2/25/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//
//public staic double placeholder = 0;
#include "SimpleConditional.hpp"
#include <iostream>

bool SimpleConditional::Condition(){
   // double temp = x;
    double temp = x;
    bool ret = false;
//    if(isKey){
//        for(int i=0; i < sizeof(messageKey);i++)
//        {
//            if(x* == messageKey[i])
//            {
//                temp = 1;
//            }
//        }
//    }
//    else{
//        temp = *x;
//    }
//    std::cout<< temp << " is x before condition, ";

    if(temp > 0){
        ret = true;
        if(isNot){
            ret = false;
        }
    }
    else if(temp <= 0){
        ret = false;
        if(isNot){
            ret = true;
        }
    }
//    std::cout<< temp << " is x after condition, ";

    return ret;
    //see if sensor is at threshold
}

double SimpleConditional::X(){
    double temp = (double)x;
//    std::cout<< temp << " is x after X(), ";

//    if(isKey){
//        for(int i=0; i < sizeof(messageKey);i++)
//        {
//            if(*x == messageKey[i])
//            {
//                return 1;
//            }
//        }
//    }
//    double temp = 0;
//    if(x > 0){
//        temp = x;
//        if(isNot)
//        {
//            temp = 0;
//        }
//    }
    return (double)temp;
}
SimpleConditional::SimpleConditional() : x(basic){
    this->x = basic;
    this->isNot = false;
}
//bool SimpleConditional::X(){
//    bool temp = false;
//    if(this->x > 0){
//        temp = true;
//        if(isNot)
//            temp = false;
//    }
//    return temp;
//}

//SimpleConditional::SimpleConditional(bool isKye, char* x){
//    isKey = true;
//    this->x* = *x;
//    //this->isNot = isnot;
//}
//void SimpleConditional::setX(double x){
//    this->x = x;
//
//}

SimpleConditional::SimpleConditional (double& x,bool isnot) : x(basic) {
//    std::cout<< x << " is set as SC, ";
    this->x = x;
    this->isNot = isnot;
}

//SimpleConditional::SimpleConditional(const SimpleConditional& orig) {
//}

SimpleConditional::~SimpleConditional() {
}
