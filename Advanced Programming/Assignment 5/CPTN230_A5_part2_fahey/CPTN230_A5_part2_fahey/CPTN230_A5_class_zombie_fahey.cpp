/*

Zombie Class Source File for Assignment 5

Paul Fahey

4 November 2011

*/

#include "CPTN230_A5_class_zombie_fahey.h" // Includes the zombie class header file
#include "CPTN230_A5_class_creeper_fahey.h" // Includes the creeper class header file

	zombie::zombie() // Default zombie constructor initializes the data members
	{
		cout << "Default Zombie Constructor" << endl; // A message that will explicitly display the constructors existence when called
		zombies = 2; // zombies is set with an integer value of 2
	}

	 zombie::zombie(int z) // Overloaded zombie constructor initializes the data members with a zombie parameter:
	 {
		cout << "Overloaded zombie constructor" << endl; // A message will be displayed showing the overloaded constructor’s existence
		set_zombie(z); // zombie is set with an integer value that came from the application file
	 }

	zombie::~zombie()// zombie destructor that will destroy the zombie objects:
	{
		cout << "Default zombie destructor" << endl; // A message to show the destructors existence when called
	}

	bool zombie::operator==(zombie &Z)// An operator function with a return type of boolean that will overload the == operator using the address of a zombie object
	 {
		// Conditional statements that will check to see if the zombie is the same for both objects

		 if((zombies == Z.zombies))
		 {
			 return true;
		 }
		 else
		 {
			 return false;
		 }
	}

	bool zombie::operator!=(zombie &Z) // An operator function with a return type of boolean that will overload the != operator using the address of a zombie object
	{
		// Conditional statements that will check to see if the zombie is not the same for the objects being compared

		if((zombies != Z.zombies))
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	 bool zombie::operator>(zombie &Z) // An operator function with a return type of boolean that will overload the > operator using the address of a zombie object
	 {
		// Conditional statements that will check to see if the zombie is greater than the creeper of another zombie object

		 if((zombies > Z.zombies))
		 {
			 return true;
		 }
		 else
		 {
			 return false;
		 }
	 }

	 bool zombie::operator==(creeper &C)// An operator function with a return type of boolean that will overload the == operator using the address of a creeper object
	 {
		// Conditional statements that will check to see if the zombie is the same as the creeper object

		 if((zombies == C.creepers))
		 {
			 return true;
		 }
		 else
		 {
			 return false;
		 }
	 }

	 bool zombie::operator!=(creeper &C) // An operator function with a return type of boolean that will overload the != operator using the address of a creeper object
	 {
		// Conditional statements that will check to see if the zombie is not the same as the creeper object 

		 if((zombies != C.creepers))
		 {
			 return true;
		 }
		 else
		 {
			 return false;
		 }
	 }

	 bool zombie::operator>(creeper &C) // An operator function with a return type of boolean that will overload the > operator using the address of a creeper object
	 {
		// Conditional statements that will check to see if the zombie object is greater than the creeper object and vise versa

		 if((zombies > C.creepers))
		 {
			 return true;
		 }
		 else
		 {
			 return false;
		 }
	 }

	 void zombie::set_zombie(int input) // The set zombie function is initialized that takes in a input zombie as a parameter
	 {
		zombies = input; // The input zombie is given as the value for data member zombie
	 }
	
	 int zombie::get_zombie(void) // The get zombie function is initialized that takes in no parameters
	 {
		return zombies; // It returns the zombie data member to the application file
	 }
	
