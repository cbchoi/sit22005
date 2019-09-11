#pragma once
#ifndef _PLUS_H
#define _PLUS_H

#include "operator.h"

class Plus: public Operator
{
public:
    Plus(std::string op);
    ~Plus();

public:    
    int operate(int operand1, int operand2);
};
#endif