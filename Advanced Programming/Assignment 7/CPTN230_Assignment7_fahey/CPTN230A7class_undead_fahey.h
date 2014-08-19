/*

undead Class Header File for Assignment 7

Paul Fahey

28 November 2011

*/

#ifndef UNDEAD_H
#define UNDEAD_H

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include"CPTN230A7class_monster_fahey.h" // Will include the monster class

// A class called undead is created 

class undead : public monster // The undead class will publicly inherit the monster class
{

private: 
	string alive; // A alive with type string

public:

	undead(); // A default undead constructor that will initialize all the data members
	~undead(); //A undead destructor that will destroy the undead objects
	void set_alive(string); // A set function to set the alive that will not return any value but take in a string value
	string get_alive(void); // A get function to get the alive that will return an string value but not take in any value
};
#endif