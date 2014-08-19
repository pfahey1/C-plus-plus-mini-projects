/*

Creeper Class Header File for Assignment 5

Paul Fahey

4 November 2011

*/

#ifndef CREEPER_H
#define CREEPER_H

#include <iostream>
#include <iomanip>
using namespace std;

class zombie; // Will include the zombie class

class creeper // A class called creeper is created
{
	friend class zombie; //	The creeper class will make a friend with the zombie class

private:
	int creepers; // A creeper with type integer
	
public:
	
	creeper(); // A default creeper constructor that will initialize all the data members
	creeper(int); // A overloaded creeper constructor that will initialize all the data members and take in one integer value
	~creeper(); // A creeper destructor that will destroy the creeper objects
    
	bool operator==(creeper &C); // An operator function that will overload the == operator using the address of a creeper object
	bool operator!=(creeper &C); // An operator function that will overload the != operator using the address of a creeper object
	bool operator>(creeper &C); // An operator function that will overload the > operator using the address of a creeper object
	bool operator==(zombie &Z); // An operator function that will overload the == operator using the address of a creeper object
	bool operator!=(zombie &Z); // An operator function that will overload the != operator using the address of a creeper object
	bool operator>(zombie &Z); // An operator function that will overload the > operator using the address of a creeper object
	void set_creeper(int); // A set function to set the creeper that will not return any value but take in a integer value
	int get_creeper(void); // A get function to get the creeper that will return an integer value but not take in any value
};
#endif