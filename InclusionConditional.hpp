//
//  InclusiveConditional.hpp
//  HomeEditor
//
//  Created by Idries Kysia on 2/25/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#ifndef InclusionConditional_hpp
#define InclusionConditional_hpp

#include <stdio.h>
#include "IConditional.hpp"
#include "SimpleConditional.hpp"


class InclusionConditional : public IConditional{
public:
    SimpleConditional x;
    SimpleConditional y;
    bool isAnd;
    bool Condition();
    InclusionConditional();
    InclusionConditional(bool isAnd);
    //InclusionConditional(const InclusionConditional& orig);
    virtual ~InclusionConditional();
private:
    
};
#endif /* InclusionConditional_hpp */
