//
//  IConditional.hpp
//  HomeEditor
//
//  Created by Idries Kysia on 2/25/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#ifndef IConditional_hpp
#define IConditional_hpp

#include <stdio.h>
class IConditional {
public:
    
    static char messageKey[];
    virtual bool Condition() = 0;
    //void setMessageList(char list[]);
    virtual ~IConditional();
private:
    
};
#endif /* IConditional_hpp */
