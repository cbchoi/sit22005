#pragma once
#ifndef _CALCULATOR_H
#define _CALCULATOR_H

#include "operator.h"
#include <map>
#include <string>
#include <iostream>

class Calculator
{
private:
    std::map<std::string, Operator*> m_operator_list;
    
public:
    Calculator();
    virtual ~Calculator();
    
public:
    int Calculate(std::string op, int operand1, int operand2);
    bool isOperatorListEmpty();
    
public:
    void AddOperator(std::string opcode, Operator* op);
    void RemoveOperator(std::string opcode);
    
public:
    void PrintOperatorList(std::ostream out);
    void ClearOperators();
};

#endif // CALCULATOR_H