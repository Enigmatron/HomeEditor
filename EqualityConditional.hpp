//
//  EqualityConditional.hpp
//  HomeEditor
//
//  Created by Idries Kysia on 2/25/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#ifndef EqualityConditional_hpp
#define EqualityConditional_hpp

#include <stdio.h>
#include "IConditional.hpp"
#include "SimpleConditional.hpp"

class EqualityConditional : IConditional {
public:
    SimpleConditional x;
    SimpleConditional y;
    bool isEqual;
    bool Condition();
    EqualityConditional();
    //EqualityConditional(const EqualityConditional& orig);
    virtual ~EqualityConditional();
private:
    
};
#endif /* EqualityConditional_hpp */
