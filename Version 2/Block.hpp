//
//  Block.hpp
//  HomeEditor
//
//  Created by Idries Kysia on 5/23/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#ifndef Block_hpp
#define Block_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include "IBlockid.cpp"
using namespace std;


//a unit that processes information
class LogicBlock : public IBlockid{
public:
    typedef enum 
    string update(vector<string> i)=0;
    
    
    static const Block* additionOperation;
    static const Block* subtractionOperation;
    static const Block* multiplicationOperation;
    static const Block* divisionOperation;
    static const Block* notOperation;
    static const Block* greatThanOperation;
    static const Block* lessThanOperation;
    static const Block* equalToOperation;
    static const Block* andOperation;
    static const Block* orOperation;


private:
    vector<IBlockid*> InputLayer;
    IBlockid* finalBlockid;
    
    
};
#endif /* Block_hpp */
