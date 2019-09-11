#pragma once
#ifndef _OPERATOR_H
#define _OPERATOR_H

#include <string>

class Operator
{
public:
    Operator(std::string op_name):_op_name(op_name){ _object_count++; }
    virtual ~Operator(){ _object_count--; }
public:
    virtual int operate(int operand1, int operand2) = 0;
    virtual std::string get_op_name(){ return _op_name; }
    
protected:
    std::string _op_name;
    static int _object_count;
};
#endif //_OPERATOR_H
