#include <iostream>
#include <cstring>
#include <stdlib.h>

int main(int argc, char** argv)
{ 
	char buff[1000];
    std::cout << "Enter the expression. " << std::endl;
    std::cin.getline(buff, 1000);

    char* operand1 = strtok(buff, " \t\n");
    strtok(NULL, " \t\n");
    char* operand2 = strtok(NULL, " \t\n");
    
    std::cout << atoi(operand1) + atoi(operand2) << std::endl;

    return 0;
}