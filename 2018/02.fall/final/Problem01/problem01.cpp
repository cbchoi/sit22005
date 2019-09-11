#include <iostream>
#include <string>
#include <vector>

class Item
{
//////////// Problematic Region Starts ////////////
private:
    string _item_name;
    int         _item_stock;
    int         _item_price;
    
public:
    Item(std::string name, int stock, int price)
    :_item_name(name), _item_stock = stock;
    {
        _item_price = price;
    }
    
public:
    ~Item()
    {
        std::cout << _item_name << ": destroyed" << std::endl;
    }
    
public:
    string get_item_name()
    {
        return _item_name;
    }
    
    void set_item_name(string name)
    {
        _item_name = name;
    }
    
    int get_item_stock()
    {
        return _item_stock;
    }
    
    void set_item_stock(int stock)
    {
        _item_stock = stock;
    }
    
    int get_item_price()
    {
        return _item_price;
    }
    
    void set_item_price(int _price)
    {
        _item_price = price;
    }

public:
    void increase_stock(int amount)
    {
        _item_stock += amount;
    }
    
    void decrease_stock(int amount)
    {
        _item_stock -= amount;
    }
    
public:
    void print()
    {
        cout << "Item Name: "  << _item_name << endl;
        cout << "Item Stock:" << _item_stock << endl;
        cout << "Item Price:" << _item_price << endl;
    }
};
//////////// Problematic Region Ends ////////////

int main()
{
    std::vector<Item> item_list;
    
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Add Three items (Local Variables)" << std::endl;
    item_list.push_back(Item("Sam-da-soo", 5, 800));
    item_list.push_back(Item("Coca-Cola", 5, 1000));
    item_list.push_back(Item("T.O.P", 5, 1500));
    std::cout << "---------------------------------" << std::endl;
    std::cout << "Print items " << std::endl;
    std::cout << "---------------------------------" << std::endl;
    for(std::vector<Item>::iterator iter = item_list.begin();
        iter != item_list.end();
        ++iter)
        {
            (*iter).print();
            std::cout << "---------------------------------" << std::endl;
        }
    
    std::cout << "Program Ended" << std::endl;
    return 0;
}
