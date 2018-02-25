//
//  ComparisonConditional.hpp
//  HomeEditor
//
//  Created by Idries Kysia on 2/25/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#ifndef ComparisonConditional_hpp
#define ComparisonConditional_hpp

#include <stdio.h>
#include "IConditional.hpp"
#include "SimpleConditional.hpp"
class ComparisonConditional : public IConditional {
public:
    SimpleConditional& x;
    SimpleConditional& y;
    bool GreaterThan;
    bool Condition();
//    ComparisonConditional(bool greater) : x(), y(){}
    ComparisonConditional(const ComparisonConditional& orig);
    virtual ~ComparisonConditional();
private:
    
};
#endif /* ComparisonConditional_hpp */
