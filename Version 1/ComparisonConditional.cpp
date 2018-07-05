//
//  ComparisonConditional.cpp
//  HomeEditor
//
//  Created by Idries Kysia on 2/25/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#include "ComparisonConditional.hpp"


bool ComparisonConditional::Condition(){
    bool temp = false;
    if(GreaterThan){
        if((this->x.X() > this->y.X())){
            temp = true;
        }
    }
    else if(!GreaterThan){
        if((this->x.X() > this->y.X())){
            temp = true;
        }
    }
    return temp;
}

//ComparisonConditional::ComparisonConditional(bool greater) : x(), y(){
////    x = *SimpleConditional();
////    y = *SimpleConditional();
//
//    GreaterThan = greater;
//}

//ComparisonConditional::ComparisonConditional(const ComparisonConditional& orig) {
//}

ComparisonConditional::~ComparisonConditional() {
}
