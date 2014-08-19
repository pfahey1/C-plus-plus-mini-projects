/*

Creeper Class Source File for Assignment 5

Paul Fahey

4 November 2011

*/

#include "CPTN230_A5_class_creeper_fahey.h"	// Includes the creeper class header file
#include "CPTN230_A5_class_zombie_fahey.h" // Includes the zombie class header file

	creeper::creeper() // Default Creeper constructor initializes the data members:
	{
		cout << "Creeper default constructor" << endl; // A message that will explicitly display the constructors existence when called
		creepers = 2; // creeper is set with an integer value of 2
	}
	
	creeper::creeper(int c)// Overloaded Creeper constructor initializes the data members with a creeper parameter:
	{
		cout << "Overloaded Creeper Constructor" << endl; // A message will be displayed showing the overloaded constructor’s existence
		set_creeper(c);// creeper is set with an integer value that came from the application file
	}

	creeper::~creeper() // Creeper destructor that will destroy the creeper objects:
	{
		cout << "Default creeper destructor" << endl; // A message to show the destructors existence when called
	}

	bool creeper::operator==(creeper &C) // An operator function with a return type of boolean that will overload the == operator using the address of a creeper object
	{
		// Conditional statements that will check to see if the creeper is the same for both objects

		if ( (creepers == C.creepers))	
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool creeper::operator!=(creeper &C) // An operator function with a return type of boolean that will overload the != operator using the address of a creeper object
	{
		// Conditional statements that will check to see if the creeper is not the same for the objects being compared

		if ( (creepers != C.creepers))	
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool creeper::operator>(creeper &C) // An operator function with a return type of boolean that will overload the > operator using the address of a creeper object
	{
		// Conditional statements that will check to see if the creeper is greater than the creeper of another creeper object

	
		 if ( (creepers > C.creepers))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

 bool creeper::operator==(zombie & Z) // An operator function with a return type of boolean that will overload the == operator using the address of a zombie object
 {
		// Conditional statements that will check to see if the creeper is the same as the zombie object

	 if((creepers == Z.zombies))
	 {	
		 return true;
	 }
	 else
	 {	
		 return false;
	 }
 }

	 bool creeper::operator !=(zombie &Z) // An operator function with a return type of boolean that will overload the != operator using the address of a zombie object
	 {
		// Conditional statements that will check to see if the creeper is not the same as the zombie object 

		
	 if((creepers != Z.zombies))
	 {	
		 return true;
	 }
	 else
	 {	
		 return false;
	 }
 }

	 bool creeper::operator>(zombie &Z) // An operator function with a return type of boolean that will overload the > operator using the address of a zombie object
	 {
		// Conditional statements that will check to see if the creeper object is greater than the zombie object

		 if((creepers > Z.zombies))
		 {
			 return true;
		 }
		 else
		 {
			 return false;
		 }
	 }

	void creeper::set_creeper(int input) // The set creeper function is initialized that takes in a input creeper as a parameter
	{
		creepers = input; // The input creeper is given as the value for data member creeper
	}
	
	int creeper::get_creeper(void) // The get creeper function is initialized that takes in no parameters
	{
	
		return creepers; // It returns the creeper  data member to the application file
	}
	

