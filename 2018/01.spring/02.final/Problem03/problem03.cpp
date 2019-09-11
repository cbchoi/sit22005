#include "problem03.h"
#include <iostream>

member::member(int _id, std::string _name)
{
    
}

activity::activity(int _id, std::string _contents)
{
    
}

club_management_system::club_management_system()
{
    
}

int club_management_system::add_member(std::string name)
{
    
    return member_id_count++;
}

int club_management_system::get_member_id(std::string name)
{
    
        
    return -1;
}

int club_management_system::remove_member(std::string name)
{
    int found_id = get_member_id(name);
    
    return found_id;
}

int club_management_system::remove_member(int _id)
{
  
    
    return _id;
}
    
void club_management_system::log_activity(int _id, std::string action)
{
    
}

void club_management_system::show_activity(int _id)
{
    
}

void club_management_system::show_members()
{
   
}