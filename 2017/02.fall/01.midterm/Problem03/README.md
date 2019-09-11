# Problem03
Following Code has several semantic errors. 
```
#include <iostream>

void increase_variable(int var);

int main()
{
    int contents = 0;
    
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			if((i %2) == (j %2))
			{
			    increase_variable(contents);
				std::cout << contents << contents << contents;
			}
			else
			{
			    for(int k = 0; k < 3; k++)
				    std::cout << "*";
			}
		}
	}
	return 0;
}

void increase_variable(int var)
{
    var++;
}
```
You should correct the semantic errors to work properly. 
You may refer the output result of the program using output program.
You may execute the program as follows.
```
~/workspace/midterm/Problem03 (master) $./output
```
