# Problem04
한동 게임주식회사에서는 2018년에 새로운 게임을 개발하려고 준비하고 있습니다. 
새로운 게임은 C++ 기반의 게임으로 주어진 item을 합쳐서 큰 item을 만드는 게임입니다. 
예를 들면, item이 숫자라고 하였으 때 2 + 2 = 4, 4 + 2 = 6 과 같이 주어진 숫자를 합쳐서 큰 숫자를 만드는 것입니다.
이와 같은 게임을 만들기 위해서 게임 설계자는 class 기반의 게임을 설계하였고, 다음과 같이 프로그램을 동작시킬 예정입니다. 

```
Item i1("num", 2);
Item i2("num", 2);
i1 = i2;
```

이상과 같은 프로그램을 만들기 위해서 설계자는 Item 클래스를 만들었고, 
Item 클래스에 대하여 다음과 같이 class 코드를 만들었습니다. 
```
class Item
{
public:
	Item(); // Default Constructor
	Item(const char* name, int val); // Constructor with argument
	Item(const Item& rhs); // Copy Constructor
	~Item(); // Destructor

public:	
	const Item& operator=(const Item& rhs); // Assign operator overloading
	const Item& operator=(const int val);   // Assign operator overloading

public:
	void addItem(const Item& item); // add two Item object
	
public:
	void print(std::ostream& os); // print function

public: // get/set function
	int  get_value() const;
	void set_value(const int val);
	
private: // member variable
	char* m_name;
	int   value;

protected: // static variable and static functions
	static int item_count;
	static void increase_item_count();
	static void decrease_item_count();
public:
	static void print_total_item(std::ostream& os);
};

```
이상 클래스를 구현하여 다음 코드가 실행되도록 프로그램을 완성하시오.
```
int main()
{
	{
		Item i1("num", 10);
		i1.print(std::cout);
		
		Item::print_total_item(std::cout);
		
		Item i2 = i1;
		i1 = 20;
		i1.print(std::cout);
		i2.print(std::cout);
		
		Item::print_total_item(std::cout);
		
		Item i3;
		i3 = i1;
		i1.print(std::cout);
		i3.print(std::cout);
		
		Item::print_total_item(std::cout);
		
		i3.addItem(i2);
		i3.print(std::cout);
		
		Item::print_total_item(std::cout);
	}
	
	// Check there is no remained data object
	Item::print_total_item(std::cout);
	return 0;
}
```
