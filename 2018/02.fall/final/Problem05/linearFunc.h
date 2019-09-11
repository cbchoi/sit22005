#pragma once
#ifndef _LINEAR_FUNCTION_H
#define _LINEAR_FUNCTION_H

#include "operator.h"

class LinearFunction: public Operator
{
public:
    LinearFunction(std::string op);
    ~LinearFunction();

public:    
    int operate(int operand1, int operand2);
};


#endif