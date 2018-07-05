//
//  main.cpp
//  HomeEditor
//
//  Created by Idries Kysia on 2/25/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#include <iostream>
#include "SimpleConditional.hpp"
#include "InclusionConditional.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    double test = 4.0;
    double test1 = 2.0;
    SimpleConditional tf = SimpleConditional(test, false);
    SimpleConditional ft = SimpleConditional(test1, true);

    std::cout << (tf.X()) << " X(), ";

    bool g = (tf.X() < ft.X());
    
    bool f = (tf.X() > ft.X());
    std::cout << (tf.Condition()) << "  is tf, "<< (ft.Condition()) <<"  is ft, ";

    std::cout << (g) << " less than of 4 and 2, ";
    std::cout << (f) << " less than of 2 and 4, ";

    InclusionConditional fand = InclusionConditional(false);
//    fand.x = *tf;
//    fand.y = *ft;
    std::cout << fand.Condition()<<" or is, ";
    test1 = 0;
    std::cout << ft.X()<<" is ft's value, ";
    std::cout << fand.Condition()<<" or is ";

    //std::cout << tf.X();

    return 0;
}
