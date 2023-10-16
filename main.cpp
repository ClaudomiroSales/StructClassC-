/*
* Multiple line
* comment
*/
#include "SmartPhone.h"
#include "SmartPhone.cpp"

#include<iostream>
using std::cout;



/*
#include "SmartPhone.h"
#include "SmartPhone.cpp"
#include "Data.h"
#include "Data.cpp"
#include "Pessoa.cpp"
*/

// A variable declaration like basic data types
struct Point 
{
    int x = 0; // It is Considered as Default Arguments and no Error is Raised
    int y = 1;
};


int main()
{
    //Point p1;
    struct Point p1;
 
    // Accessing members of point p1
    // No value is Initialized then the default value is considered. ie x=0 and y=1;
    cout << "x = " << p1.x << ", y = " << p1.y << '\n';
   
    // Initializing the value of y = 20;
    p1.y = 20;
    cout << "x = " << p1.x << ", y = " << p1.y << "\n\n";

    
   SmartPhone sp1;  
   string name = "Jose";
   int age = 22;
   double salary = 50000.5;   
   Pessoa id01( name, age, salary );
   
   //Criando um contato
   sp1.addContact( id01 );

   sp1.printContactList( );

   name = "Augusto";
   age = 23;
   salary = 40000.5;

    //Criando um contato
   sp1.addContact( name, age, salary );

   sp1.printContactList( );

    /*
   //Testing 
   //void addContact( const Pessoa & );
	//void addContact( const string &, const string &, const vector< string > & );
   
   //Criandos dois contatos
   sp1.addContact( id01 );

   socialMediaConection.push_back( string("Tiktok") );
   sp1.addContact( "Joao", "91982929292", socialMediaConection );

   sp1.printContactList( );

   //Testing
   //Criando outro SmartPhone por cópia
   SmartPhone sp2( sp1 );
   socialMediaConection.push_back( string("Instagram") );
   sp2.addContact( "Maria", "91982019128", socialMediaConection );

   cout << "Lista de contatos do sp2.\n";
   sp2.printContactList( );

   cout << "\n\nUsando o friend ostream &operator\n";
   cout << sp2;


   
   cout << "Test3";

   */

   return 0;
}