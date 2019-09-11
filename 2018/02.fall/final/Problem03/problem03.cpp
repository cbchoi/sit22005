#include <iostream>

class Parent
{
public:
	Parent(int arg = 10)
	{
		member1 = arg;
		member2 = arg * 10;
		member3 = arg * 100;
	}
	
public:
	int operation1(){ return member3;}
	int operation2(){ return 0;}
	int operation3() { return -1;}
protected:
	int member1;
	int member2;
private:
	int member3;
};

class Child1: public Parent
{
public:
	Child1(int arg)
	{
		
	}
	
public:
	int operation1(){ return member1; }
	virtual int operation2() { return member1 + member2; }
	virtual int operation3() { return member1 -1;}
};

class Child2: public Parent
{
public:
	Child2(int arg)
	{
		
	}
	
public:
	virtual int operation2() { return member1 - member2; }
	virtual int operation3() { return member2 -1;}
};

int main()
{
	std::cout << "Test01" << std::endl;
	{
		Parent p;
		Child1 c(20);	
		std::cout << p.operation1() << std::endl;
		std::cout << p.operation2() << std::endl;
		std::cout << p.operation3() << std::endl;
		std::cout << "---" << std::endl;
		
		std::cout << c.operation1() << std::endl;
		std::cout << c.operation2() << std::endl;
		std::cout << c.operation3() << std::endl;
		std::cout << "---" << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "Test02" << std::endl;
	{
		Parent* p;
		Child1 c(20);
		p = &c;
		std::cout << p->operation1() << std::endl;
		std::cout << p->operation2() << std::endl;
		std::cout << p->operation3() << std::endl;
		std::cout << "---" << std::endl;
		
		std::cout << c.operation1() << std::endl;
		std::cout << c.operation2() << std::endl;
		std::cout << c.operation3() << std::endl;
		std::cout << "---" << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "Test03" << std::endl;
	{
		Parent* p;
		Child1 c(20);
		Child2* pc2 = new Child2(30);
		p = &c;
		std::cout << p->operation1() << std::endl;
		std::cout << p->operation2() << std::endl;
		std::cout << p->operation3() << std::endl;
		std::cout << "---" << std::endl;
		
		std::cout << c.operation1() << std::endl;
		std::cout << c.operation2() << std::endl;
		std::cout << c.operation3() << std::endl;
		std::cout << "---" << std::endl;
		
		std::cout << pc2->operation1() << std::endl;
		std::cout << pc2->operation2() << std::endl;
		std::cout << pc2->operation3() << std::endl;
		std::cout << "---" << std::endl;
		
		p = pc2;
		std::cout << pc2->operation1() << std::endl;
		std::cout << pc2->operation2() << std::endl;
		std::cout << pc2->operation3() << std::endl;
		std::cout << "---" << std::endl;
		
	}
	std::cout << std::endl;
	
	return 0;
}
