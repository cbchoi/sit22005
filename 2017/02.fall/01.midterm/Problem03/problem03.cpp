#include <iostream>

int increase_variable(int var);

int main()
{
    int contents = 0;
    
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if((i %2) == (j %2))
			{
				std::cout << contents << contents << contents;
			}
			else
			{
			    for(int k = 0; k < 3; k++)
				    std::cout << "*";
			}
		}
		contents = increase_variable(contents);
		std::cout << std::endl;
	}
	return 0;
}

int increase_variable(int var)
{
    return var+1;
}