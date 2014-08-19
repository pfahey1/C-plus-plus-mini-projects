/*

Class Source File for Assignment 4

Paul Fahey

17 October 2011

*/

#include "CPTN230_A4_class_fahey.h" // Includes the creeper class header file


    creeper::creeper() // Default Creeper constructor initializes the data members:
	{
		target = 1; // Target is set with an integer value of 1
		explosion = 50; // Explosion is set with an integer value of 5
		awareness = 100; // Awareness is set with an integer value of 100
		direction = 180; // direction initialized with an integer value of 180
		
	}

	creeper::creeper(int t) // Overloaded Creeper constructor initializes the data members with a target parameter:
	{
		set_target(t); // Target is set with an integer value that came from the application file
		explosion = 100; // Explosion is set with an integer value of 100
		awareness = 20; // Awareness is set with an integer value of 20
		direction = 90; // direction initialized with an integer value of 90
	}

	creeper::creeper(int t,int e) // Overloaded Creeper constructor initializes the data members with a target and explosion parameter:
	{
		set_target(t); // Target is set with an integer value that came from the application file 
		set_explosion(e); // Explosion is set with an integer value that came from the application file 
		awareness = 75; // Awareness is set with an integer value of 75 
		direction = 120; // direction initialized with an integer value of 120 
	}

	creeper::creeper(int t,int e,int a) // Overloaded Creeper constructor initializes the data members with a target, explosion and awareness parameter:
	{
		set_target(t); // Target is set with an integer value that came from the application file 
		set_explosion(e); // Explosion is set with an integer value that came from the application file 
		set_awareness(a); // Awareness is set with an integer value that came from the application file 
		direction = 180; // direction initialized with an integer value of 180 
	}

	creeper::creeper(int t,int e,int a, int d) // Overloaded Creeper constructor initializes the data members with a target, explosion, awareness, an direction parameter:
{
	set_target(t); // Target is set with an integer value that came from the application file 
	set_explosion(e); // Explosion is set with an integer value that came from the application file 
	set_awareness(a); // Awareness is set with an integer value that came from the application file 
	set_direction(d); // direction initialized with an integer value that came from the application file 
}

	bool creeper::operator==(creeper &object)// An operator function with a return type of boolean that will overload the == operator using the address of a creeper object
	{
		// Conditional statements that will check to see if the target, explosion, awareness, and direction are all the same for both objects

		if ( (target == object.target) &&
			 (explosion == object.explosion) &&	
			 (awareness == object.awareness) &&
			 (direction == object.direction) )
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool creeper::operator!=(creeper &object) // An operator function with a return type of boolean that will overload the != operator using the address of a creeper object
	{
		// Conditional statements that will check to see if either target, explosion, awareness, and direction are not or all not the same for the objects being compared

		
		if ( (target != object.target) ||
			 (explosion != object.explosion) ||	
			 (awareness != object.awareness) ||
			 (direction != object.direction) )
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool creeper::operator>(creeper &object) // An operator function with a return type of boolean that will overload the > operator using the address of a creeper object
	{
		// Conditional statements that will check to see if the explosion and awareness is greater or one or the other is greater with the target and explosion being non effective in this statement for the objects being compared

		if ( (target < object.target) && (direction < object.direction) )
		{
			return true;
		}
		else if ( (explosion > object.explosion) && (awareness > object.awareness) )
		{
			return true;
		}

		else if ( (explosion > object.explosion) && (awareness < object.awareness) )
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
	void creeper::set_target(int input) // The set target function is initialized that takes in a input target as a parameter
	{
		target = input; // The input target is given as the value for data member target pointer
	}

	int creeper::get_target(void) // The get target function is initialized that takes in no parameters
	{
		return target; // It returns the target pointer  data member to the application file
	}

	void creeper::set_explosion(int input) // The set explosion function is initialized that takes in a input explosion as a parameter
	{
		explosion = input; // The input explosion is given as the value for data member explosion
	}

	int creeper::get_explosion(void) // The get explosion function is initialized that takes in no parameters
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
		direction = input; // The input direction is given as the value for data member direction
	}

	int creeper::get_direction(void) // The get direction function is initialized that takes in no parameters
	{
		return direction; // It returns the direction data member to the application file
	}

	