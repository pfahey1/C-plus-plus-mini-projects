/*

Zombie Class Header File for Assignment 5

Paul Fahey

4 November 2011

*/

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <iomanip>
using namespace std;

class creeper; // Will include the creeper class

class zombie // A class called zombie is created
{
	friend class creeper; //	The zombie class will make a friend with the creeper class

private:
	int zombies; // A zombie with type integer
	
public:
	
	zombie(); // A default creeper constructor that will initialize all the data members
	zombie(int); // A overloaded creeper constructor that will initialize all the data members and take in one integer value
	~zombie(); // A creeper destructor that will destroy the zombie objects
    
	bool operator==(zombie &Z); // An operator function that will overload the == operator using the address of a zombie object
	bool operator!=(zombie &Z); // An operator function that will overload the != operator using the address of a zombie object
	bool operator>(zombie &Z); // An operator function that will overload the > operator using the address of a creeper object
	bool operator==(creeper &C); // An operator function that will overload the == operator using the address of a creeper object
	bool operator!=(creeper &C); // An operator function that will overload the != operator using the address of a creeper object
	bool operator>(creeper &C); // An operator function that will overload the > operator using the address of a creeper object
	void set_zombie(int); // A set function to set the creeper that will not return any value but take in a integer value
	int get_zombie(void); // A get function to get the creeper that will return an integer value but not take in any value
};
#endif