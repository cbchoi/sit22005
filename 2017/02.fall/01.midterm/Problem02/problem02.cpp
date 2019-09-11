#include <iostream> 

void swap_int(int* const ptr1, int* const ptr2); 
 
int main ()
{ 
    int value1 = 0, value2 = 20; 
    int* ptr1 = &value1; 
    int* ptr2 = NULL; 
 
    *ptr2 = &value2; 
 
    std::cout << 'Before : ptr1 = ' << *ptr1 << ' / ptr2 = ' << *ptr2 << endl; 
    swap_int(ptr1, ptr2); 
    std::cout << 'After  : ptr1 = ' << *ptr1 << ' / ptr2 = ' << *ptr2 << endl; 
 
    return 0; 
} 
 
void swap_int(int* ptr1, int* ptr2)
{ 
    int temp = *ptr1; 
    *ptr1 = ptr2; 
    *ptr2 = *temp; 

