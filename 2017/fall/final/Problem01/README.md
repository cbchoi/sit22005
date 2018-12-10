# Problem01
## Please read the followings and answer the questions.
1. What is the Instantiation? Give an example.
- answer: It is to make a class into an object. 
- example: 
class Car
{ 
public:
    string make;
    Car(string make)
    {
        this -> make = make;
    }
}
Car myCar = new Car ("Sonata");



2. What is the virtual function? 
- answer: It is a function that is declared in original class, and is re-declared by secondary class. 
-

3. Why we use the virtual function? 
- answer: We use the virtual function to override a certain action in secondary class, from the primary one. 

4. Define concept "Encaptulation". Give an example.
- answer: Encaptulation is a method in Object Oriented Programming to gather the data and information in one unit of class. 
- So, in deep, it is to put Methods and Variables in one Class. 
- example:
class encapsulated
{
    private:
        int b;
    public:
        void set (int a)
        {
            b=a;
        }
        int get()
        {
            return b;
        }
};
int main()
{
    encapsulated obj;
    obj.set(5);
    cout<<obj.get(); // making int a and int b into encapsulated method function
    return 0;
}