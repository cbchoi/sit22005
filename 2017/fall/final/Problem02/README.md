# Problem02
다음 코드는 문법적 오류를 가지고 있다. 문법 오류를 찾고 고쳐서 ouput 파일과 동일한 결과가 나오도록 프로그램을 수정하시오. 
```
class Person
{
public:
    Person(int _age)
    : age(_age)
    {
        
    }
    
    virtual void speak() = 0;
private:
    int age;
};

class Korean 
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
```