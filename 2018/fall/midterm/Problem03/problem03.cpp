#include <iostream>

int level = 0;

void contents(int* arg, int start, int size)
{
    int i;
    for(i = 0; i < size; i++)
        std::cout << arg[start+i] << " ";
    std::cout << std::endl;
}

void display(int* arg, int start, int size)
{
    int i = 0;
    if(level == 0){
        contents(arg, start, size);
    } else {
        for(i = 0; i < level; i++)
            std::cout << "\t";
            
        contents(arg, start, size);
    }
}

/////////////////////////////////////////////////////////////////
// Problematic Region
int* merge(int* arg, int lstart, int lsize, int rstart, int rsize)
{
    int* array = new int[lsize + rsize];
    int array_idx = 0, i = 0, j = 0;
    
    while(i < lsize && j < rsize){
        // blank //
        {
            array[array_idx++] = arg[lstart + i];
            i += 1;
        } else {
            array[array_idx++] = arg[rstart + j];
            j += 1;
        }
    }
    
    while(i < lsize){
        // blank start
        
        // blank end
        i += 1;
    }
    
    while(j < rsize){
        // blank start
        
        // blank end
        j += 1;
    }
    
    for(array_idx = 0; array_idx < lsize + rsize; array_idx++){
        // blank start
        
        // blank end
    }
    
    delete [] array;
    return arg;
}

int* mergesort(int* arg, int start, int size)
{
    int mid, *left, *right, *result;
 
    mid = size/2;

    level += 1;
    if(size < 2){
        display(arg, start, size);
        level -= 1;
        return arg;
    }
    
    display(arg, start, size);
    
    // blank start
    
    
    
        
    // blank end
    
    display(arg, start, size);
    level -= 1;
    
    return result;
}
/////////////////////////////////////////////////////////////////

int main()
{
    level -= 1;
    int L[] = {23, 2, 8, 6, 17, 11, 20, 7, 12, 1, 15};
    mergesort(L, 0, 11);
    return 0;
}