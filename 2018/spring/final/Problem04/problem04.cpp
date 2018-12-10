#include <iostream>
#include <cstring>
#include <stdlib.h>

/*****
 * Implement your code here
 *
 * 
 * 
 * 
 * 
 */
 
int main(){

	Person *list[100];
	int count = 0;

	while(true){
		int type;
		int age;
		char name[100];

	    std::cout<<"Enter the type (0:Professor, 1:Student, 2:GraduateStudent, -1:End) "<<std::endl;
		std::cout<<">> ";
		std::cin>>type;

		if(type==-1) break;
		std::cout<<"Age? ";
		std::cin>>age;
		std::cout<<"Name? ";
		std::cin.getline(name, 100);

		if(type==0)
			list[count] = new Professor(age, name);
		if(type==1)
			list[count] = new Student(age, name);
		if(type==2)
			list[count] = new GraduateStudent(age, name);

		list[count++]->setMoreInformation();
		std::cout<<std::endl;
	}

	while(1){
		int num;

		std::cout<<"Choose one member (-1 : exit)"<<std::endl;

		for(int i=0; i<count; i++){
			std::cout<<"["<<i<<"]"<<" : ";
			list[i]->printTypeAndName();
		}
		std::cout<<">>";
		std::cin>>num;

		if(num==-1) break;
		list[num]->printInformation();
		std::cout<<std::endl;
	}
	
	return 0;
}
