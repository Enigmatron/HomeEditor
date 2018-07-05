//
//  ConditionalTree.hpp
//  HomeEditor
//
//  Created by Idries Kysia on 2/25/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#ifndef ConditionalTree_hpp
#define ConditionalTree_hpp

#include <stdio.h>
#include "IConditional.hpp"

struct Tree{
    IConditional* root;
    IConditional* next;
};
class ConditionalManager {
public:
    Tree T;
    void update();
    
    void AddCondition(IConditional pair);
    void removeCondition(IConditional pair);
    void removeCondition(int index);
    
    //if -1 it puts on the end if its out of bounds it puts it on the end
    void addToCondition(int index, int iteration, IConditional cond);
    void addToCondition(int index, IConditional cond);
    void removeToCondition(int index, int iteration);
    ConditionalManager(IConditional c);
    ConditionalManager(const ConditionalManager& orig);
    virtual ~ConditionalManager();
private:
    
};
 
#endif  /*ConditionalTree_hpp */

