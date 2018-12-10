#include <iostream> 

class Person
{
public:
    Person(int _age)
    : age(_age)
    {
        
    }
    
    virtual void speak() = 0;
public:
    int age;
};

class Korean : public Person
{
public:
    Korean(int age)
    :Person(age)
    {
        
    }
public:
    virtual void speak()
    {
        std::cout << "nae naineun " << age << " sal ibnida." << std::endl;
    }
};

class American : public Person
{
public:
    American(int age)
    :Person(age)
    {
        
    }
    
public:
virtual void speak()
    {
        std::cout << "I am " << age << " years old." << std::endl;
    }
};

int main()
{
    Korean k1(21);
    American a1(22);
    k1.speak();
    a1.speak();
    return 0;
}