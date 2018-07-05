//
//  Operand.hpp
//  HomeEditor
//
//  Created by Idries Kysia on 5/23/18.
//  Copyright © 2018 Idries Kysia. All rights reserved.
//

#ifndef Operand_hpp
#define Operand_hpp

#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;


//add a digit limit to the values you have and string length
///reply: make it nine spaces and handle int_32
class Operand{
public:
    string toString();
    string getValue();
    string getString();
    bool getBoolean();
    double getDouble();
    int getInteger();
    Operand(){
        ostringstream os;
        os<<"N::;";
        value = os.str();
    }
    Operand(int val){
        ostringstream os;
        os << "I::"<< val << ";";
        value = os.str();
    }
    Operand(bool val){
        ostringstream os;
        os << "B::"<< val << ";";
        value = os.str();
    }
    Operand(double val){
        ostringstream os;
        os << "D::"<< val << ";";
        value = os.str();
    }
    Operand(string val){
        ostringstream os;
        os << "S::"<< val << ";";
        value = os.str();
    }
private:
    friend std::ostream& operator<<(std::ostream&, const Operand&);

    static void conversion_D(){
        
    }
    static void conversion_S(){
        
    }
    static void conversion_I(){
        
    }
    static void conversion_B(){
        
    }
//    static s
    string value;
    
};
std::ostream& operator<<(std::ostream &strm, const Operand &a) {
    return strm << a.value;
}
#endif /* Operand_hpp */
