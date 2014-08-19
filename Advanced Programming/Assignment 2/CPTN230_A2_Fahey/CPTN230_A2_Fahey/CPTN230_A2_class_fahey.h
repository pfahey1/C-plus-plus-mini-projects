/*

Class Header File for Assignment 2

Paul Fahey

29 September 2011

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class creeper // A class called creeper is created
{
private:
	string target; // A target with type string
	string explosion; // An explosion with type string
	int awareness; // An awareness with type integer
	int direction; // A direction with type integer
	string *targetptr; // A pointer to a target of type string

public:
	
	creeper(); // A creeper constructor that will initialize all the data members
	~creeper();// A creeper destructor that destroy the creeper class/object
	void set_target(string); // A set function to set the target that will not return any value but take in a string value
	string get_target(void); // A get function to get the target that will return an integer value but not take in any value
	void set_explosion(string); // A set function to set the explosion that will not return any value but take in a string value
	string get_explosion(void); // A get function to get the explosion that will return an integer value but not take in any value
	void set_awareness(int); // A set function to set the awareness that will not return any value but take in a string value
	int get_awareness(void); // A get function to get the awareness that will return an integer value but not take in any value
	void set_direction(int); // A set function to set the direction that will not return any value but take in a string value
	int get_direction(void); // A get function to get the direction that will return an integer value but not take in any value
	creeper *get_address(void); // A pointer function that will get the address of the creeper object instance
	
};
	