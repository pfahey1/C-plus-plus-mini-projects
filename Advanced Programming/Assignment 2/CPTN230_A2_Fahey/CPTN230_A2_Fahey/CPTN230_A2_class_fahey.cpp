/*

Class Source File for Assignment 2

Paul Fahey

29 September 2011

*/

#include "CPTN230_A2_class_fahey.h" // Includes the creeper class header file

    creeper::creeper() // Creeper constructor initializes the data members
	{
		cout << "Making a creeper." << endl; // A message saying a creeper object is being created
		target = " "; // Target is initialized with an empty string value
		explosion = " "; // Explosion is initialized with an empty string value
		awareness = 0; // Awareness is set with an integer value of zero
		direction = 0; // direction initialized with an integer value of zero
		targetptr = &target; // Target pointer is initialized with the address of target
	}

	creeper::~creeper() // Creeper destructor that will remove the target(s) when called upon
	{
		cout << "Removing: " << get_target() << " as a target." << endl; // A message that will say "Remove target from creeper" using the get target function
	}
	
	void creeper::set_target(string input) // The set target function is initialized that takes in a input target as a parameter
	{
		*targetptr = input; // The input target is given as the value for data member target pointer
	}

	string creeper::get_target(void) // The get target function is initialized that takes in no parameters
	{
		return *targetptr; // It returns the target pointer  data member to the application file
	}

	void creeper::set_explosion(string input) // The set explosion function is initialized that takes in a input explosion as a parameter
	{
		explosion = input; // The input explosion is given as the value for data member explosion
	}

	string creeper::get_explosion(void) // The get explosion function is initialized that takes in no parameters
	{
		return explosion; // It returns the explosion data member to the application file
	}

	void creeper::set_awareness(int input) // The set awareness function is initialized that takes in a input awareness as a parameter
	{
		awareness = input; // The input awareness is given as the value for data member awareness
	}

	int creeper::get_awareness(void) // The get awareness function is initialized that takes in no parameters
	{
		return awareness; // It returns the awareness  data member to the application file
	}

	void creeper::set_direction(int input) // The set direction function is initialized that takes in a input direction as a parameter
	{
		this->direction = input; // The input direction is given as the value for the this pointer of the creeper object to the data member direction to ensure is a data member from the creeper class
	}

	int creeper::get_direction(void) // The get direction function is initialized that takes in no parameters
	{
		return this->direction; // It returns the this pointer to the data member direction to the application file 
	}

	creeper *creeper::get_address(void) // The get address pointer function is initialized that doesn't take in any parameters
	{
		return this; // It returns the address of the current instance of the creeper class
	}
