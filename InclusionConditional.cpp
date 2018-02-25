//
//  InclusiveConditional.cpp
//  HomeEditor
//
//  Created by Idries Kysia on 2/25/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#include "InclusionConditional.hpp"


bool InclusionConditional::Condition(){
    bool temp = false;
    if(isAnd){
            if(x.Condition() && y.Condition()){
                temp = true;
            }
    }
    else if(!(isAnd))
    {
        if(x.Condition() || y.Condition()){
            temp = true;
        }
    }
    return (temp);
}
InclusionConditional::InclusionConditional(){
    
}
InclusionConditional::InclusionConditional(bool isAnd) : x(), y() {


    this->isAnd = isAnd;
    
}

//InclusionConditional::InclusionConditional(const InclusionConditional& orig) {
//}

InclusionConditional::~InclusionConditional() {
}
