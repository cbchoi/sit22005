# Problem04
ROT13 (rotate by 13 places) is a simple letter substitution cipher that is an instance of a Caesar cipher developed in ancient Rome and used by Julius Caesar who used it in his private correspondence. 
In this problem, you should develop alternative cipher program ROT6ROT. The ROT6ROT replaces a letter with special rules. The following table demonstrates the translation rule in ROT6ROT:

| Code    | Code    | Code    | Code    |
|---------|---------|---------|---------|
| A <-> H | B <-> I | C <-> J | D <-> K |
| E <-> L | F <-> M | G <-> G | H <-> A |
| I <-> B | J <-> C | K <-> D | L <-> E |
| M <-> F | N <-> U | O <-> V | P <-> W |
| Q <-> X | R <-> Y | S <-> Z | T <-> T |
| U <-> N | V <-> O | W <-> P | X <-> Q |
| Y <-> R | Z <-> S |         |         |

Thus, the translation of the word JULIUS using ROT6ROT would be CNEBNZ. Write a C++ program that inputs a letter and outputs the corresponding letter using the ROT6ROT encoding scheme above concerning the following requirements.
+ if a user enters non-alphabetic letters do not change the character.
+ You cannot change the logic structure. You must fill in the blanks. Modification of the logic structure is strongly prohibited.

```
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

		/* blank */
		{
			if(index < 6)
		    {
				*c_ptr = codex[index+7];
		    }
		    else if(index > 6 && index < 13)
		    {
		    	/* blank */
		    }
		    /* blank */
		    {
				/* blank */
		    }
		    /* blank */
		    {
				/* blank */
		    }
		}
	    
	    c_ptr++;
	}
	std::cout << input_buf << std::endl;
	
	return 0;
}
```

You may refer the output result of the program using output program.
You may execute the 
```
~/workspace/midterm/Problem04 (master) $./output
```
