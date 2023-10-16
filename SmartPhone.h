#ifndef SMARTPHONE_H
#define SMARTPHONE_H

#include <string>
using std::string;

#include <vector>
using std::vector;

struct Pessoa 
{
    string name;
    int age;
    double salary;

    // Constructor with default values
    Pessoa(const string& name_ = "", int age_ = 18, double salary_ = 0.0)
        : name(name_)
        {
        // You can also include additional initialization or validation logic here.
            age = (age_ > 0) ? age_ : 0;
            
            salary = (salary_ > 0 ? salary_ : 0);            
        }
        
};

class SmartPhone
{
public:
	SmartPhone( );

    ~SmartPhone( );

    void printContactList( ) const;

    void addContact( const Pessoa & );

    void addContact( const string &, int, double );

    void deleteLastContact( );

private:

    int pinCode;
    
    vector< Pessoa * > contacts;

};



#endif // SMARTPHONE_H