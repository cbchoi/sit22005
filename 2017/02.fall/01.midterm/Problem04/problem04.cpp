#include <iostream>
#include <ctype.h>
 
int main()
{
	char input_buf[100];
	char codex[26] = 
	                {'A', 'B', 'C', 'D', 'E',
	                 'F', 'G', 'H', 'I', 'J',
	                 'K', 'L', 'M', 'N', 'O',
	                 'P', 'Q', 'R', 'S', 'T', 
	                 'U', 'V', 'W', 'X', 'Y', 'Z'};

	// Get char string from console after executing following code,
	// input_buf will contain the string data, and the input
	std::cin.getline(input_buf, 100);
 
	char* c_ptr = input_buf;
	int index = 0;
	while((*c_ptr) != '\0')
	{
	    (*c_ptr) = toupper((*c_ptr));
	    index = (*c_ptr) - 'A';

		if(*c_ptr >= 'A' && *c_ptr <= 'Z')
		{
			if(index < 6)
		    {
				*c_ptr = codex[index+7];
		    }
		    else if(index > 6 && index < 13)
		    {
		    	*c_ptr = codex[index-7];
		    }
		    else if(index >= 13 && index < 19)
		    {
				*c_ptr = codex[index+7];
		    }
		    else if(index > 19 && index < 26)
		    {
				*c_ptr = codex[index-7];
		    }
		}
	    
	    c_ptr++;
	}
	std::cout << input_buf << std::endl;
	
	return 0;
}