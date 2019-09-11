#pragma once
#ifndef _MINUS_H
#define _MINUS_H

#include "operator.h"

class Minus: public Operator
{
public:
    Minus(std::string op);
    ~Minus();

public:    
    int operate(int operand1, int operand2);
};

#endif