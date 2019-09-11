#pragma once
#ifndef _MULTIPLY_H
#define _MULTIPLY_H

#include "operator.h"

class Multiply: public Operator
{
public:
    Multiply(std::string op);
    ~Multiply();

public:    
    int operate(int operand1, int operand2);
};


#endif