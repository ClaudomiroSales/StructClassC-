#include "SmartPhone.h"

#include <iostream>
using std::cout;

SmartPhone::SmartPhone( )
:pinCode(0)
{
	
}

SmartPhone::~SmartPhone( )
{

	for( int i = 0; i < contacts.size( ); i++ )
		delete contacts[ i ];

}

void SmartPhone::printContactList( ) const
{
	cout << "Minha lista de contatos eh:\n";
	for( int i = 0; i < contacts.size( ); i++ )
    {
		cout << contacts[ i ]->name   << '\t';
        cout << contacts[ i ]->age    << '\t';
        cout << contacts[ i ]->salary << '\n';
    }
    cout << '\n';
}

void SmartPhone::addContact( const Pessoa &newcontact )
{
	contacts.push_back( new Pessoa( newcontact ) );	
}

void SmartPhone::addContact( const string &name, int age, double salary )
{
	contacts.push_back( new Pessoa( name, age, salary ) ); 	
}

void SmartPhone::deleteLastContact( )
{
	delete contacts[ contacts.size() - 1 ];
	contacts.pop_back( );
}
