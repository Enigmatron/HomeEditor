//
//  IUnit.hpp
//  HomeEditor
//
//  Created by Idries Kysia on 3/19/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#ifndef IUnit_hpp
#define IUnit_hpp

#include <stdio.h>
#include <string>

class IBlockid{
public:
    //typedef
    std::string update(){
        return process();
    }
    std::string process();
private:
    IBlockid* parent;
    std::pair<IBlockid*, IBlockid*> children;
    //blockType typeForce1;
    //blockType typeForce2;
    int index1;
    int index2;

};
#endif /* IUnit_hpp */
