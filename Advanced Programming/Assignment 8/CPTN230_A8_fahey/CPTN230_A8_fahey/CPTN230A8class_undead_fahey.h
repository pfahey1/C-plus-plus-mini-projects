/*

undead Class Header File for Assignment 8

Paul Fahey

3 December 2011

*/

#ifndef UNDEAD_H
#define UNDEAD_H

#include <iostream>
#include <iomanip>
using namespace std;

#include"CPTN230A8class_monster_fahey.h" // Will include the monster class

// A class called undead is created 

class undead : public monster // The undead class will publicly inherit the monster class
{

private: 
	string alive; // A alive with type string
	string darkness; // A darkness with type string

public:

	undead(); // A default undead constructor that will initialize all the data members
	~undead(); //A undead destructor that will destroy the undead objects
	void set_alive(string); // A set function to set the alive that will not return any value but take in a string value
	string get_alive(void); // A get function to get the alive that will return an string value but not take in any value
	virtual void set_darkness(string); // A virtual set function to set the darkness that will not return any value but take in a string value
	virtual string get_darkness(void); // A virtual get function to get the darkness that will return an string value but not take in any value
};
#endif