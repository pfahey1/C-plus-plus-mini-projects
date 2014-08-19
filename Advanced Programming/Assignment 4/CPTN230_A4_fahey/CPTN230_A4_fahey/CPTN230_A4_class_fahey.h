/*

Class Header File for Assignment 4

Paul Fahey

17 October 2011

*/

#include <iostream>
#include <iomanip>
using namespace std;

class creeper // A class called creeper is created
{
private:
	int target; // A target with type string
	int explosion; // An explosion with type string
	int awareness; // An awareness with type integer
	int direction; // A direction with type integer
	

public:
	
	creeper(); // A default creeper constructor that will initialize all the data members
	creeper(int); // A overloaded creeper constructor that will initialize all the data members and take in one integer value
	creeper(int,int); // A overloaded creeper constructor that will initialize all the data members and take in two integer values
    creeper(int,int,int); // A overloaded creeper constructor that will initialize all the data members and take in three integer values
    creeper(int,int,int,int); // A overloaded creeper constructor that will initialize all the data members and take in four integer values
	bool operator==(creeper &object); // An operator function that will overload the == operator using the address of a creeper object
	bool operator!=(creeper &object); // An operator function that will overload the != operator using the address of a creeper object
	bool operator>(creeper &object); // An operator function that will overload the > operator using the address of a creeper object
	void set_target(int); // A set function to set the target that will not return any value but take in a string value
	int get_target(void); // A get function to get the target that will return an integer value but not take in any value
	void set_explosion(int); // A set function to set the explosion that will not return any value but take in a string value
	int get_explosion(void); // A get function to get the explosion that will return an integer value but not take in any value
	void set_awareness(int); // A set function to set the awareness that will not return any value but take in a string value
	int get_awareness(void); // A get function to get the awareness that will return an integer value but not take in any value
	void set_direction(int); // A set function to set the direction that will not return any value but take in a string value
	int get_direction(void); // A get function to get the direction that will return an integer value but not take in any value

};
	