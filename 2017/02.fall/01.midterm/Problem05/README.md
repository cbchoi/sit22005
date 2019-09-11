# Problem05
Build a simple adder that add given two values. 
Assume that the there is only one operator, '+'. 
Also, user may seperate operand and operator by using white space. 
For example, user may enter 1000 + 2000, and your program should return 3000. 
Moreover, your program should satisfy the following requirements.
+ The length of the operand cannot exceed 100.
+ User may enter negative number. If the user enters the negative number, you may assume that there is no white space between number and the sign.
+ Assume that the user does not put alphabet or other symbols, except + and -.
+ You should dynamically allocate memory using new/delete keywords
+ 
Refer the following code skeleton
```
int main(int argc, char** argv)
{ 
	char buff[1000];
    std::cout << "Enter the expression. " << std::endl;
    std::cin.getline(buff, 1000);







}
```
If your code contains several libraries, you may get additional points. 
Also, you may check the result by entering the following command.
```
~/workspace/midterm/Problem05 (master) $./output
```
