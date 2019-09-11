#include <iostream>
#include <string>
#include <vector>
#include <cstring>

class Book
{
private:
    char* _book_name;
    char* _author_name;
    int   _publish_year;

public:
    Book(const char* name, const char* author, int year)
    :_book_name(nullptr), _author_name(nullptr)
    {
        _book_name = name;
        _author_name = _author_name;
    }
    
public:
    Book(const Book& rhs)
    {
        _book_name = rhs._book_name;
        _author_name = rhs._author_name;
        _publish_year = rhs._publish_year;
    }
    
public:    
    Book& operator=(const Book& rhs)
    {
        _book_name = rhs._book_name;
        _author_name = rhs._author_name;
        _publish_year = rhs._publish_year;
        
        return *this;
    }
    
public:  
    ~Book()
    {
        strcpy(_book_name, "deleted");
        delete [] _book_name;
        strcpy(_author_name, "deleted");
        delete [] _author_name;
    }
    
public:
    void print()
    {
        std::cout << "Book Name: " << _book_name << std::endl;
        std::cout << "Author Name: " << _author_name << std::endl;
        std::cout << "Publish Date: " << _publish_year << std::endl;
    }
};

class Library
{
private:
    std::vector<Book> _library;
    
public:
    void operator+=(const Book& rhs)
    {
        _library.push_back(rhs);
    }
    
public:
    void print()
    {
        for(std::vector<Book>::iterator iter = _library.begin();
            iter != _library.end();
            ++iter)
        {
            (*iter).print();
        }
    }
};
//////////// Problematic Region Ends ////////////

int main()
{
    Library lb;
    {
        Book a("abc", "cbchoi", 2017);
        lb += a;    
    }
    {
        Book a("def", "jekim", 2016);
        lb += a;    
    }
    {
        Book a("ghi", "sekim", 2018);
        lb += a;    
    }
    
    
    lb.print();
    return 0;
}