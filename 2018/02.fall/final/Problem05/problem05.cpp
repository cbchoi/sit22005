#include <iostream>
#include "calculator.h"

#include "plus.h"
#include "minus.h"
#include "multiply.h"
#include "linearFunc.h"

int main()
{
    Calculator c;
    c.AddOperator("+", new Plus("+"));
    c.AddOperator("-", new Minus("-"));
    c.AddOperator("*", new Multiply("*"));
    c.AddOperator("!", new LinearFunction("!"));
    
    int operand1;
    int operand2;
    
    std::cout << "10 + 20 = " << c.Calculate("+", 10, 20) << std::endl;
    std::cout << "10 - 20 = " << c.Calculate("-", 10, 20) << std::endl;
    std::cout << "10 * 20 = " << c.Calculate("*", 10, 20) << std::endl;
    std::cout << "f(10) + 20 = " << c.Calculate("!", 10, 20) << std::endl;
    
    return 0;
}