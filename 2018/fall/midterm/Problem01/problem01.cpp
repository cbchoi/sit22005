#include <iostream>

int main()
{
    /////////////////////////////////////////////
    /// Problematic Region
    int results[2] = {0, 0};
    int array1[2] = {1, 2}
    int array2[3] = {4, 3};
    
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            results[i] += array1[i] * array2[j];    
        }
        
        cout << result[i] << endl;
    }
    /////////////////////////////////////////////
    
    return 0;
}