# Problem04
Following Code is from SIT22001 Programming I course. 
The code is about the finding maximum subsquence sum from given sequence of numbers.
Your task is to build the code from the sratch, however, I have given you the code skeleton.

```
#include <iostream>
#include <sstream>

#define ARRAY_SIZE 100

int subTail_idx = 0;
int subTail[ARRAY_SIZE];

int subSoFar_idx = 0;
int subSoFar[ARRAY_SIZE];

int get_max(int num1, int num2)
{
    if(num1 <= num2)
        return num2;
    else
        return num1;
}

void reset(int* array, int* array_idx)
{
    for(int i = 0; i < ARRAY_SIZE; i++)
        array[i] = 0;
        
    *array_idx = 0;
}

void append(int* array, int value, int* array_idx)
{
    array[(*array_idx)++] = value;
}

void assign(int* array1, int* array1_idx, int* array2, int* array2_idx)
{
    for(int i = 0; i < *array2_idx; i++)
    {
        array1[i] = array2[i];
    }
    
    *array1_idx = *array2_idx;
}

void max_sub(int* arg, int size)
{
    int MaxTail = 0; 
    int MaxSoFar = 0;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

int main()
{
    int lst[] = {31, -41, 59, 26, -53, 58, 97, 12, -93, -23, 84};
    max_sub(lst, 10);
    
    std::stringstream sstream;
    
    int max_val = 0;
    sstream << "seq:{";
    for(int i = 0; i < (subSoFar_idx); i++)
    {
        max_val += subSoFar[i];
        sstream << subSoFar[i] << ", ";
    }
        
    sstream << "}";
    
    std::cout << sstream.str() << ", " <<  max_val << std::endl;
    return 0;
}

```
You may refer the output result of the program using output program.
You may execute the program as follows. 
```
~/workspace/midterm/Problem04 (master) $./output
```

* Note that you should modify the problematic reigon only!