//
//  SimpleConditional.hpp
//  HomeEditor
//
//  Created by Idries Kysia on 2/25/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#ifndef SimpleConditional_hpp
#define SimpleConditional_hpp

#include <stdio.h>
#include "IConditional.hpp"

class SimpleConditional: public IConditional {
public:
    double basic = 1;
    double& x;
    bool isNot;
//    bool isKey = true;
    bool Condition();
    double X();
    
    SimpleConditional();
   // SimpleConditional(double& x);
//    SimpleConditional(bool isKey, char* x);
    //void setX(double x);
    SimpleConditional(double& x, bool isnot);
//    SimpleConditional(const SimpleConditional& orig);
    virtual ~SimpleConditional();
private:
    
};
#endif /* SimpleConditional_hpp */
