//
//  EqualityConditional.cpp
//  HomeEditor
//
//  Created by Idries Kysia on 2/25/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#include "EqualityConditional.hpp"


bool EqualityConditional::Condition(){
    bool temp = false;
    if(isEqual){
        if((this->x.X() == this->y.X())){
            temp = true;
        }
    }
    else if(!isEqual){
        if((this->x.X() != this->y.X())){
            temp = true;
        }
    }
    return temp;
}

EqualityConditional::EqualityConditional() {
}



EqualityConditional::~EqualityConditional() {
}
