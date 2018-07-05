//
//  IOperand.hpp
//  HomeEditor
//
//  Created by Idries Kysia on 5/23/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#ifndef IOperand_hpp
#define IOperand_hpp

#include <stdio.h>
#include <string>
#include "IBlockid.hpp"
class IOperand{
public:
    virtual std::string process(IBlockid b);
};
#endif /* IOperand_hpp */
